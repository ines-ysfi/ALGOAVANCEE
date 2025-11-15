# ALGO AVANCEE - Programmes en C

## Table des matières
- [Vue d'ensemble](#vue-densemble)
- [Prérequis](#prérequis)
- [Compiler & Exécuter](#compiler--exécuter)
- [Description détaillée des TPs](#description-détaillée-des-tps)
- [Arborescence](#arborescence)
- [Contribution](#contribution)
- [Licence](#licence)

## Vue d'ensemble

Ce projet contient des implémentations d'algorithmes de graphes, d'arbres et de structures de données :

### Dossiers principaux

- **`Tp01/`** — Premier TP : Implémentation de l'algorithme de coloration de graphe Welsh et Powell
- **`Tp02/`** — Deuxième TP : Extension du TP1 avec chargement de graphes depuis l'entrée standard ou fichier
- **`Tp03/`** — Troisième TP : Arbres généraux et correction de l'algorithme Welsh-Powell
- **`Tp11/`** — Listes chaînées et utilitaires
- **`Tp12/`** — Arbres binaires

## Prérequis

- **Système d'exploitation** : Linux (ou compatible Unix/macOS)
- **Compilateur** : `gcc` (GNU Compiler Collection)
- **Éditeur** (optionnel) : Visual Studio Code, Vim, Emacs, ou autre

## Compiler & Exécuter

### Instructions générales


### Exemples spécifiques par TP

#### TP01 - Welsh et Powell
```bash
cd Tp01
gcc graph.c mainTest.c -o mainTest
./mainTest
```

#### TP02 - Chargement de graphes
```bash
cd Tp02
gcc graph.c main.c -o main

# Exécution avec entrée standard
./main

# Exécution avec fichier
./main < pays.txt


## Description détaillée des TPs

### TP01 - Algorithme de Welsh et Powell
Implémentation de l'algorithme de coloration de graphes Welsh-Powell.

**Fichiers** :
- `graph.c` / `graph.h` : Structure de données et fonctions pour les graphes
- `mainTest.c` : Programme de test
- `mainTest` : Exécutable précompilé

### TP02 - Chargement de graphes
Extension du TP01 avec la capacité de charger des graphes depuis l'entrée standard ou un fichier.

**Fichiers** :
- `graph.c` / `graph.h` : Gestion des graphes (version améliorée)
- `main.c` : Programme principal avec lecture de fichier
- `pays.txt` : Exemple de graphe représentant les pays européens
- `main` : Exécutable précompilé

### TP03 - Arbres généraux et correction Welsh-Powell
Travaux sur les arbres généraux et version corrigée de l'algorithme Welsh-Powell.

**Fichiers** :
- `arbreGen.c` / `arbreGen.h` : Implémentation des arbres généraux
- `testArbre.c` : Tests pour les arbres
- `CorrectWelshPowell.c` : Version corrigée de l'algorithme
- `testArbre`, `welsh` : Exécutables précompilés

### TP11 - Listes chaînées
Implémentation et manipulation de listes chaînées.

**Fichiers** :
- `liste.c` / `liste.h` : Structure et opérations sur les listes
- `maListe.c` : Programme de test
- `a.out` : Exécutable précompilé

### TP12 - Arbres binaires
Implémentation d'arbres binaires et opérations associées.

**Fichiers** :
- `arbre.c` / `arbre.h` : Structure et fonctions pour arbres binaires
- `monArbre.c` : Programme de test
- `arbre` : Exécutable précompilé

## Arborescence
## 🌳 Arborescence

```bash
ALGOAVANCEE/
├── README.md
├── Tp01/
│   ├── graph.c
│   ├── graph.h
│   ├── mainTest.c
│   └── mainTest (Exécutable)
├── Tp02/
│   ├── graph.c
│   ├── graph.h
│   ├── main.c
│   ├── main (Exécutable)
│   └── pays.txt
├── Tp03/
│   ├── CorrectWelshPowell.c
│   ├── arbreGen.c
│   ├── arbreGen.h
│   ├── testArbre.c
│   ├── testArbre (Exécutable)
│   └── welsh (Exécutable)
├── Tp11/
│   ├── liste.c
│   ├── liste.h
│   ├── maListe.c
│   └── a.out (Exécutable)
└── Tp12/
    ├── arbre.c
    ├── arbre.h
    ├── monArbre.c
    └── arbre (Exécutable)

## Licence

Ce projet est destiné à un usage éducatif dans le cadre du cours d'algorithmique avancée.

---

**Auteur** : [Ines YOusfi]  
**Cours** : Algorithmique Avancée  
**Année** : [2025/2026]
