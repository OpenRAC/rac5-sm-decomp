/* LEVEL_18:0x155FF8 -- rend le flottant +0x20 du module attache a
   l'objet (+0x58). */

float func_155FF8(char *a0)
{
    return *(float *)(*(char **)(a0 + 0x58) + 0x20);
}
