/* LEVEL_24:0x001018 -- publie deux valeurs dans l'objet global, qui est
   relu avant le second magasin. */

extern char *D_001BFEC8;

void func_001018(float a, float b)
{
    *(float *)(D_001BFEC8 + 0x10C) = a;
    *(float *)(D_001BFEC8 + 0x110) = b;
}
