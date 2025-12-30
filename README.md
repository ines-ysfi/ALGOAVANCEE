# Yousfi_Ines_Part2Algo - Projets Algorithmes Avancés

## Vue d'ensemble

Ce dépôt contient deux projets distincts développés dans le cadre d'un cours d'algorithmique avancée :

1. **CodeMiniProjet** : Un projet Python pour calculer le chemin le plus court sur une image en utilisant l'algorithme de Dijkstra
2. **CodePartB** : Un projet Java pour visualiser et analyser les graphes pondérés

---

##  Arborescence du projet

```
Yousfi_Ines_Part2Algo/
├── README.md                          # Ce fichier
├── CodeMiniProjet/                   # Projet Python - Pathfinding sur images
│   ├── main.py                       # Point d'entrée du programme
│   ├── dijkstra.py                   # Implémentation de l'algorithme de Dijkstra
│   ├── imageGraph.py                 # Classe pour gérer les images comme graphes
│   ├── interface.py                  # Interface graphique (sélection de points)
│   └── img/                          # Dossier contenant les images de test
│       ├── eye.png                   # Image d'un oeil
│       └── Mona_LisaColor.png        # Image de la Joconde en couleur
│
└── CodePartB/                        # Projet Java - Graphes pondérés
    ├── src/
    │   └── MainApp/
    │       ├── App.java              # Programme principal et gestion de l'affichage
    │       └── WeightedGraph.java    # Classe représentant un graphe pondéré
    ├── bin/
    │   └── MainApp/                  # Fichiers compilés (.class)
    │       ├── App.class
    │       ├── Board.class
    │       ├── WeightedGraph.class
    │       ├── WeightedGraph$Edge.class
    │       ├── WeightedGraph$Graph.class
    │       └── WeightedGraph$Vertex.class
    └── graph.txt                     # Fichier de données du graphe
```

---

## CodeMiniProjet - Pathfinding sur Images (Python)

### Description

Ce projet implémente l'algorithme de **Dijkstra** pour trouver le chemin le plus court entre deux pixels d'une image. Chaque pixel est considéré comme un nœud d'un graphe, et la distance entre pixels adjacents est calculée en fonction de leurs valeurs de couleur.

### Prérequis

Vous devez avoir Python 3 installé avec les bibliothèques suivantes :

- **matplotlib** : Pour l'affichage graphique et l'interaction
- **numpy** : Pour le traitement des images
- **pillow** : Pour charger les images

### Comment exécuter

1. Accédez au répertoire du projet :
```bash
cd CodeMiniProjet
```

2. Lancez le programme :
```bash
python3 main.py
```

3. **Utilisation interactive** :
   - Une fenêtre s'affichera avec l'image sélectionnée (par défaut `eye.png`)
   - **Cliquez sur le point de départ** sur l'image
   - **Cliquez sur le point d'arrivée**
   - L'algorithme calculera et affichera le chemin le plus court
   - Les résultats s'affichent dans la console :
     - Coordonnées du départ et de l'arrivée
     - Coût total du chemin
     - Temps d'exécution

### Fichiers détaillés

| Fichier | Rôle |
|---------|------|
| `main.py` |  : charge l'image, lance l'interface, calcule et affiche le chemin |
| `dijkstra.py` | Implémentation de l'algorithme de Dijkstra pour trouver le chemin optimal |
| `imageGraph.py` | Classe `GrapheImage` qui convertit une image en graphe pondéré |
| `interface.py` | Fonctions pour sélectionner des points et afficher le chemin sur l'image |
| `img/` | Images de test (eye.png, Mona_LisaColor.png) |

### Tester avec une autre image

Modifiez la ligne dans `main.py` :
```python
graphe = GrapheImage.charger_image("img/eye.png", taille=(16,16))
```

Remplacez `"img/eye.png"` par le chemin de votre image.

---

## ☕ CodePartB - Graphes Pondérés Interactifs (Java)

### Description

Ce projet Java permet de charger, visualiser et analyser des graphes pondérés. Il inclut une interface graphique interactive pour voir les graphes et leurs propriétés.

### Prérequis

- **JDK 8 ou supérieur** (Java Development Kit)

### Structure des fichiers Java

| Fichier | Rôle |
|---------|------|
| `App.java` | Programme principal avec interface graphique (JFrame/JComponent) |
| `WeightedGraph.java` | Classe représentant le graphe et ses opérations |
| `graph.txt` | Fichier de données du graphe à charger |

### Compilation

**Important** : Pour tester l'algorithme de **Dijkstra**, vous devez modifier le booléen `useAStar` dans le fichier `App.java` et le mettre a false
#### Méthode 1 : Compilation manuelle

```bash
cd CodePartB
# Compiler les fichiers Java
javac -d bin src/MainApp/*.java

# Exécuter le programme
cd bin
java MainApp.App
```

#### Méthode 2 : Utiliser les fichiers compilés existants

```bash
cd CodePartB/bin
java MainApp.App
```

### Format du fichier graph.txt

Le fichier `graph.txt` doit contenir la description du graphe. Format typique :

```
<nombre_de_sommets> <nombre_d'arêtes>
<sommet1> <sommet2> <poids>
<sommet3> <sommet4> <poids>
...
```

### Exemple d'utilisation

1. Naviguez vers le répertoire :
```bash
cd CodePartB/bin
```

2. Lancez l'application :
```bash
java MainApp.App
```

3. Une fenêtre graphique s'ouvrira affichant le graphe pondéré


## Résumé des technologies utilisées

### Projet Python (CodeMiniProjet)
- **Langage** : Python 3
- **Algorithme** : Dijkstra
- **Bibliothèques** : Matplotlib, NumPy, Pillow
- **Concept** : Graphes implicites (images comme graphes)

### Projet Java (CodePartB)
- **Langage** : Java
- **GUI** : Swing (JFrame, JComponent)
- **Concept** : Graphes pondérés explicites
- **Visualisation** : Rendu graphique 2D

---

## Références

- **Algorithme de Dijkstra** : Algorithme classique pour trouver le plus court chemin dans un graphe pondéré
- **Graphes comme images** : Traitement d'images via modélisation en graphe
- **Structures de données** : Files de priorité, tables de hachage

---

## Auteur
**Yousfi Ines**

# Année 
**2025/2026**

---

