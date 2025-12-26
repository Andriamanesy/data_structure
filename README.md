#data_structure

C'est un excellent choix. Utiliser le **langage C** pour les structures de données est la meilleure façon de comprendre la gestion de la mémoire, les pointeurs et l'allocation dynamique (`malloc`, `free`).

Voici une mise à jour de ton **README.md** adaptée au C, incluant les instructions de compilation et une structure plus technique.

---

# Data Structures Lab (C Implementation)

Ce dépôt contient des implémentations en **langage C** des structures de données fondamentales et avancées.
L'objectif est de maîtriser la manipulation des pointeurs et l'optimisation de la mémoire.

## 📂 Organisation du Projet

### 🧱 Structures Primitives

*Implémentations de base pour comprendre la taille des types et les adresses.*

* `integer`, `float_double`, `boolean`, `character`.
* **Pointer** : Arithmétique des pointeurs et référencement.

### 📏 Structures Linéaires

* **Static** : Tableaux (`array`) et Matrices (`matrix`) avec allocation sur la pile (stack).
* **Dynamic** :
* `linked_list` : Listes simplement et doublement chaînées.
* `stack` : Implémentation LIFO.
* `queue` : Implémentation FIFO.



### 🌳 Structures Non-Linéaires

* **Trees** :
* `binary_tree` & `binary_search_tree`.
* `avl_and_red_black_tree` : Rotation d'arbres et équilibrage.
* `heap` : Tas binaire pour Priority Queues.
* `trie` : Arbre préfixe pour chaînes de caractères.


* **Graphs** : Représentation par listes d'adjacence ou matrices.

### ⚡ Structures de Hachage & Avancées

* `hash_table` : Gestion des collisions par chaînage ou adressage ouvert.
* `bloom_filter` : Filtre probabiliste (utilisation de plusieurs fonctions de hash).
* `lru_cache` : Combinaison d'une table de hachage et d'une liste doublement chaînée.

---

## 🛠️ Compilation et Utilisation

Chaque module contient un fichier source `.c` et un header `.h`. Pour compiler un exemple (ex: la liste chaînée) :

```bash
# Se déplacer dans le dossier
cd linear_structures/dynamic/linked_list

# Compiler avec GCC
gcc -Wall -Wextra -o main main.c linked_list.c

# Exécuter
./main

```

### Outils recommandés

* **Compiler** : `gcc` ou `clang`.
* **Memory Check** : Utilise **Valgrind** pour vérifier l'absence de fuites mémoire.
```bash
valgrind --leak-check=full ./main

```



---

## 📊 Analyse de Complexité en C

| Structure 		| Accès  | Recherche | Insertion | Gestion Mémoire |
| --------- 		| -----  | --------- | --------- | --------------- |
| **Array** 		| O(1)   |  O(n)     |  O(n)     |Statique/`realloc`|
| **Linked List** 	| O(n)	 |  O(n)     |  O(1)     |Dynamique (`malloc`)|
| **Hash Table** 	| N/A 	 |  O(1)     |  O(1)     | Dynamique |
| **BST** 		|O(log n)|  O(log n) |  O(log n) | Dynamique (Récursif)|

---

## ⚠️ Concepts Clés Implémentés

* **Allocation Dynamique** : Utilisation rigoureuse de `malloc()`, `calloc()` et `free()`.
* **Pointeurs de fonction** : Utilisés pour rendre certaines structures génériques (ex: fonctions de comparaison).
* **Structures de données opaques** : Encapsulation pour masquer les détails d'implémentation dans le `.h`.

---
