/* LEVEL_20:0x000F90 -- rend le flottant +0xF8 de l'objet global. */

extern char *D_000FD3B4;

float func_000F90(void)
{
    return *(float *)(D_000FD3B4 + 0xF8);
}
