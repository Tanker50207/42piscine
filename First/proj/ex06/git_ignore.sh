#!/bin/sh
ignored=(`cat \`git rev-parse --git-dir\`/info/exclude`)
files=()
for exc in ${ignored[@]}
do
	files=($files `find . -name "$exc"`)
done
for file in ${files[@]}
do
	echo `sed 's/.*\///g' <<<"$file"`
done
