#!/bin/bash

if diff gold.txt output.txt;
then
  echo "pass"
else
  echo "fail"
fi
