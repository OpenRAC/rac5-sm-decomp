/* LEVEL_04:0x003968 -- publie une valeur dans le champ +0x2BC de
   l'objet global. */

extern char *D_002083D4;

void func_003968(float v)
{
    *(float *)(D_002083D4 + 0x2BC) = v;
}
