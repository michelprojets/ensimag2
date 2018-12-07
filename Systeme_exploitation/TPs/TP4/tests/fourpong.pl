#!/usr/bin/perl

use threads;

sub pong {
	qx{../build/ensipong};
}

my @thrs;
my $NBTH=4;

for(my $i= 0; $i < $NBTH; ++$i) {
	$thrs[$i] = threads->new(\&pong);
}
for(my $i= 0; $i < $NBTH; ++$i) {
	$thrs[$i]->join;
}
