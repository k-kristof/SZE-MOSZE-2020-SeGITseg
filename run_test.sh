#!/bin/bash

touch test/results.txt 
> test/results.txt

./a.out unit_1.txt unit_2.txt >> test/results.txt
./a.out unit_1.txt unit_3.txt >> test/results.txt
./a.out unit_2.txt unit_1.txt >> test/results.txt
./a.out unit_2.txt unit_3.txt >> test/results.txt
./a.out unit_3.txt unit_1.txt >> test/results.txt
./a.out unit_3.txt unit_2.txt >> test/results.txt

DIFF=$(diff test/results.txt test/expected_results.txt)

if [ "$DIFF" ]
  then
    # The files differ
    exit 1
  else
    # The files are identical
    exit 0
fi