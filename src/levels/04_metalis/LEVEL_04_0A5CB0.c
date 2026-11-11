/* LEVEL_04:0x0A5CB0 -- publie deux valeurs dans un etat global et pose
   son drapeau (symbole distinct, meme page). */

extern char D_0020FBD0[];
extern char D_0020FBE0;

void func_0A5CB0(float a, float b)
{
    D_0020FBE0 = 1;
    *(float *)(D_0020FBD0) = a;
    *(float *)(D_0020FBD0 + 4) = b;
}
