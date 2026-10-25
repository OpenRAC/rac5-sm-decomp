/* LEVEL_17:0x0A99F0 -- recopie un octet de mode et deux flottants dans
   quatre cases globales voisines (un symbole par case, d'ou les quatre
   lui de la meme page). */

extern unsigned char D_0019E0A5;
extern unsigned char D_0019E0A6;
extern float D_0019E0A8;
extern float D_0019E0AC;

void func_0A99F0(unsigned char a, float f1, float f2)
{
    D_0019E0A6 = a;
    D_0019E0A5 = a;
    D_0019E0A8 = f2;
    D_0019E0AC = f1;
}
