#!/bin/bash

PATH=/opt/polyspaceR2019a/polyspace/bin/:$PATH

SOURCES=$* 

DEFAULT_RES_DIR=results
echo "==============================================="
if [ -n "${RESULT_DIR:+x}" ]; then
      echo "Using results folder: $RESULT_DIR"
else
      RESULT_DIR=$DEFAULT_RES_DIR
      echo "Using default folder: $RESULT_DIR"
fi
echo "==============================================="

checkers_off="HARD_CODED_BUFFER_SIZE,HARD_CODED_LOOP_BOUNDARY,MORE_THAN_ONE_STATEMENT"
polyspace-bug-finder-nodesktop -stubbed-pointers-are-unsafe -sources "$SOURCES" -checkers all -disable-checkers "$checkers_off" -results-dir $RESULT_DIR && 
echo "===============================================" &&
echo "Results computed and stored in folder $RESULT_DIR" &&
echo "Starting Polyspace Viewer for $SOURCES" &&
echo "===============================================" &&
polyspace  -results-dir $RESULT_DIR

