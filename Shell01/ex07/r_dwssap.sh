#!/bin/sh
cut -d ':' -f 1 /etc/passwd |grep -v "^#"| awk 'NR % 2 == 0'|rev | sort -r| awk -v start="$FT_LINE1" -v end="$FT_LINE2" 'NR >= start && NR <= end' | sed 's/$/, /g' | sed '$s/, /./' | tr -d '\n'
