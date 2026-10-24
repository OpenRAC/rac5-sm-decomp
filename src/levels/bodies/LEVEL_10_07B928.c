/* LEVEL_10:0x07B928 -- arme le compteur d'un sous-systeme quand
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

extern Rec D_00243A50;

void func_07B928(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00243A50.a = 0;
        D_00243A50.d = 1.0f;
        D_00243A50.c = 0;
        D_00243A50.b = 0;
    }
}
