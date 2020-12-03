#!/usr/bin/perl -W

use strict;

my $x = 0;

while (<>) {
  if (/^(\d+)\-(\d+)\s(\w):\s(\w+)/) {
    my ($f, $t, $c, $s) = ($1, $2, $3, $4);
    my $n = () = $s =~ /\Q$c/g;
    $x++ if ($f <= $n and $n <= $t);
  }
}

END { print $x }
