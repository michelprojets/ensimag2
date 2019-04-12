#!/bin/bash

PATH=/opt/MATLAB/R2018a/polyspace/bin/:$PATH

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


polyspace-code-prover-nodesktop  -stubbed-pointers-are-unsafe -main-generator -sources "$SOURCES" -results-dir $RESULT_DIR && 
echo "===============================================" &&
echo "Results computed and stored in folder $RESULT_DIR" &&
echo "Starting Polyspace Viewer for $SOURCES" &&
echo "===============================================" &&
polyspace -results-dir $RESULT_DIR

