#!/bin/bash

# Nom du fichier source
SOURCE_FILES="*.cpp *.hpp"

# Nom de l'exécutable
EXECUTABLE="test"

# Compiler les fichiers source avec g++
echo "Compilation des fichiers source..."
g++ $SOURCE_FILES -o $EXECUTABLE

# Vérifier si la compilation a réussi
if [ $? -eq 0 ]; then
    echo "Compilation réussie. Lancement de l'exécutable..."
    echo " "
    echo "------------------------------------------------------"
    echo " "
    ./$EXECUTABLE   # Lancer l'exécutable
    echo " "
else
    echo "Erreur de compilation."
fi

