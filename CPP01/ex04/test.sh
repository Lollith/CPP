#! /bin/bash

s1[0]="brain"
s2[0]="cerveau"

s1[1]="lapin"
s2[1]="cerveau"

s1[2]="brain"
s2[2]="brain"

fin=2
i=0
nb_test=3

RED='\033[31m'
NC='\033[0m' # No Color
B='\033[34m'
Y='\033[33m'

make
echo ____________________________________________________
echo -e "$Y Pas de fichier : $NC"
./replace texte_inexistant ${s1[i]} ${s2[i]}
echo ____________________________________________________

echo -e "$Y Dossier a la place d un fichier: $NC"
./replace sources ${s1[i]} ${s2[i]}
echo Nouveau texte:
cat sources.replace.txt
rm sources.replace.txt
echo ____________________________________________________

echo texte:
cat texte
echo $'\n'
echo -e "$Y Nouveau texte si chaines vides: $NC"
./replace texte "" ""
cat texte.replace.txt
echo $'\n'
echo -e "$Y Nouveau texte si s1 vide: $NC"
./replace texte "" lapin
cat texte.replace.txt
echo $'\n'
echo -e "$Y Nouveau texte si s2 vide: $NC"
./replace texte brain ""
cat texte.replace.txt

echo ____________________________________________________

echo -e "$Y vide.txt et chaines vides: $NC"
./replace vide.txt "" ""
cat vide.txt.replace.txt
echo $'\n'
echo -e "$Y Nouveau vide.txt si s1 vide: $NC"
./replace vide.txt "" "ade"
cat vide.txt.replace.txt
echo $'\n'
echo -e "$Y Nouveau vide.txt si s2 vide: $NC"
./replace vide.txt "rien" ""
cat vide.txt.replace.txt
echo $'\n'
echo -e "$Y Nouveau vide.txt "brain" "cerveau" $NC"
./replace vide.txt "brain" "cerveau"
cat vide.txt.replace.txt


echo ____________________________________________________

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
	rm texte.replace.txt
	rm vide.txt.replace.txt
