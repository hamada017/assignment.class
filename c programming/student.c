#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'élèves à enregistrer : ");
    scanf("%d", &n);

    // Tableaux pour stocker les noms, âges et notes des élèves
    char noms[n][50];
    int ages[n];
    float notes[n];

    // Demander les informatios pour chaque élève
    for (int i = 0; i < n; i++) {
        printf("Entrez le nom de l'élève %d : ", i + 1);
        scanf("%s", noms[i]);
        printf("Entrez l'âge de l'élève %d : ", i + 1);
        scanf("%d", &ages[i]);
        printf("Entrez la note de l'élève %d : ", i + 1);
        scanf("%f", &notes[i]);
    }

    // Calculer la moyenne générale
    float moyenne = 0;
    for (int i = 0; i < n; i++) {
        moyenne += notes[i];
    }
    moyenne /= n;

    // Afficher la moyenne générale
    printf("La moyenne générale de la classe est : %.2f\n", moyenne);

    // Afficher les élèves au-dessus et en-dessous de la moyenne
    printf("Élèves avec une note supérieure à la moyenne :\n");
    for (int i = 0; i < n; i++) {
        if (notes[i] > moyenne) {
            printf("%s, %d ans\n", noms[i], ages[i]);
        }
    }

    printf("Élèves avec une note inférieure à la moyenne :\n");
    for (int i = 0; i < n; i++) {
        if (notes[i] < moyenne) {
            printf("%s, %d ans\n", noms[i], ages[i]);
        }
    }

    return 0;
}