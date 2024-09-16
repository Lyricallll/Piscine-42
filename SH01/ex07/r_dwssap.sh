#!/bin/sh
cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | cut -d ':' -f1 | rev | sort -r | head -n "$FT_LINE2" | tail -n +"$FT_LINE1" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'