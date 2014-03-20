#!/bin/bash
# Script para download de grafos para o problema de coloração.
rm -rf graphs
mkdir graphs
cd graphs
echo "Downloading..."
for i in {1..30}
do
  wget -q http://people.brunel.ac.uk/~mastjjb/jeb/orlib/files/gcol$i.txt
done 
echo OK
