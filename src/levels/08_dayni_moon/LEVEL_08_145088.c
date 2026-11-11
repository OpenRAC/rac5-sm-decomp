/* LEVEL_08:0x145088 -- arme le compteur d'un sous-systeme quand
   l'appelant fournit l'index 0xFFFF et un pointeur non nul.

   La forme retail melange deux ecritures sur le meme global : le premier
   magasin passe par le symbole (lui %hi / sw %lo), les suivants par un
   pointeur materialise (addiu %lo puis decalages +0xC, +4, +8).  L'ordre
   des affectations est l'ordre des instructions, avec l'echange des deux
   derniers magasins. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003D7060;

void func_145088(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003D7060.a = 0;
        D_003D7060.d = 1.0f;
        D_003D7060.c = 0;
        D_003D7060.b = 0;
    }
}
