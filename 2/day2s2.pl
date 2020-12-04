#!/usr/bin/perl -W

use strict;

my $x = 0;

while (<>) {
  if (/^(\d+)\-(\d+)\s(\w):\s(\w+)/) {
    $x++ if ($3 eq substr($4, $1-1, 1)) xor ($3 eq substr($4, $2-1, 1));
  }
}

END { print $x }
