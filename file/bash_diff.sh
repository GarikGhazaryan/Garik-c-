#!/bin/bash

if diff gold.txt output.txt;
then
  echo "true"
else
  echo "false"
fi
