#! /bin/bash

s1[0]="brain"
s1[1]="lapin"
s2[0]="cerveau"
s2[1]="cerveau"

fin=2
i=0
nb_test=2

RED='\033[31m'
NC='\033[0m' # No Color
B='\033[34m'

make
echo Pas de fichier :
./replace texte_inexistant ${s1[i]} ${s2[i]}
echo $'\n'

while ((i < nb_test))
do
	echo texte: 
	cat texte
	echo $'\n'
	echo -e "Nouveau texte remplace $RED${s1[i]}$NC par $B${s2[i]}$NC :"
	./replace texte ${s1[i]} ${s2[i]}
	cat texte.replace.txt
	echo ____________________________________________________

	((i+=1))
done
echo A tester : 2 chaines vides, s1 vide, s2 vide
echo fichier vide.txt "" ade
echo fichier vide.txt "" ""
##rm texte.replace.txt