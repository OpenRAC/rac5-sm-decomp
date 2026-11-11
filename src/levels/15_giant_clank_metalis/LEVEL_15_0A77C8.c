/* LEVEL_15:0x0A77C8 -- remise a zero d'un bloc de jeu, ou arret, selon deux
   codes d'entree.

   `a1 != 0xFFFF` sort tout de suite (le `sd $ra` tombe dans le cran du
   `bne`).  `a0 != 0` remet le bloc de tete a zero et relance les deux
   gestionnaires ; `a0 == 0` appelle la paire symetrique avec le code 2.
   Le premier magasin du bloc partiel passe par `lui`+offset, les trois
   autres par le pointeur ; le magasin du champ +0x08 tombe dans le cran du
   premier `jal` et celui de l'adresse du second dans le cran du second.

   Famille a adresse : un fichier par placement (les trois globales
   0x00243268 / 0x00243278 / 0x002432B0 changent d'un placement a l'autre). */

typedef struct {
    int w00;
    int w04;
    int w08;
    float f0C;
} Blk;

extern Blk D_00243268;
extern char D_00243278[];
extern char D_002432B0[];

extern void func_0F4710(void *);
extern void func_0A7320(void *);
extern void func_0A7718(void *, int);
extern void func_0A72F8(void *, int);

void func_0A77C8(int a0, int a1)
{
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 != 0) {
        D_00243268.w00 = 0;
        D_00243268.w04 = 0;
        D_00243268.w08 = 0;
        D_00243268.f0C = 1.0f;
        func_0F4710(D_00243278);
        func_0A7320(D_002432B0);
    } else {
        func_0A7718(D_002432B0, 2);
        func_0A72F8(D_00243278, 2);
    }
}
