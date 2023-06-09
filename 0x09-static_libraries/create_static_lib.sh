#!/bin/bash
gcc -S *c
ar rc liball.a *.o
