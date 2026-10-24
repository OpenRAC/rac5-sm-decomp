/* LEVEL_04:0x0C0CA8 -- rend l'une des deux cases voisines selon le
   drapeau global (le ternaire donne le beqz vers la seconde sortie). */

extern unsigned char D_00215EE4;
extern float D_00215EEC;
extern float D_00215EE8;

float func_0C0CA8(void)
{
    return D_00215EE4 != 0 ? D_00215EEC : D_00215EE8;
}
