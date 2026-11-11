/* LEVEL_01:0x001210 -- publie deux valeurs dans l'objet global, qui est
   relu avant le second magasin. */

extern char *D_001EF248;

void func_001210(float a, float b)
{
    *(float *)(D_001EF248 + 0x10C) = a;
    *(float *)(D_001EF248 + 0x110) = b;
}
