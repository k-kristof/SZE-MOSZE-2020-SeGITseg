#!/bin/bash

touch test/results.txt 
> test/results.txt

./a.out unit_1.json unit_2.json >> test/results.txt
./a.out unit_1.json unit_3.json >> test/results.txt
./a.out unit_2.json unit_1.json >> test/results.txt
./a.out unit_2.json unit_3.json >> test/results.txt
./a.out unit_3.json unit_1.json >> test/results.txt
./a.out unit_3.json unit_2.json >> test/results.txt

DIFF=$(diff test/results.txt test/expected_results.txt)

if [ "$DIFF" ]
  then
    # The files differ
    exit 1
  else
    # The files are identical
    exit 0
fi