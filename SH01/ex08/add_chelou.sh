#!/bin/bash

BASE2="mrdoc"
BASE3="gtaio luSnemf"

#echo $FT_NBR1

FT_NBR1=$(echo "$FT_NBR1" | sed "s/'/0/g; s/\\\/1/g; s/\"/2/g; s/\?/3/g; s/!/4/g")
FT_NBR2=$(echo "$FT_NBR2" | sed "y/$BASE2/01234/")

#echo "FT_NBR1 after sed: $FT_NBR1"
#echo "FT_NBR2 after sed: $FT_NBR2"
#Calcul de la somme en base 10 avec bc (ibase=5 pour base 5)

SUM=$(echo "ibase=5; $FT_NBR1 + $FT_NBR2" | bc)

RESULT=""

# -gt = greather than

while [ "$SUM" -gt 0 ]; do
  MOD=$(($SUM % 13))
  RESULT="${BASE3:$MOD:1}$RESULT"
  SUM=$(($SUM / 13))
done

# Si le résultat est vide (la somme vaut 0)
[ -z "$RESULT" ] && RESULT="${BASE3:0:1}"

echo "$RESULT"