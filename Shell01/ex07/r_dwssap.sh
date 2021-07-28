#!/bin/bash
cat /etc/passwd | grep -v '#' | cut -d : -f 1,8 | sed "1,2d" | awk 'NR% 2' | rev | sort -r | sed "1,$FT_LINE1 d" | awk "NR=='$FT_LINE1'" | sed "$FT_LINE2,$ d" | awk "NR=='$FT_LINE2'" awk '{print}' ORS=', ' | sed 's/\n//g' | sed 's/, $/./' 
