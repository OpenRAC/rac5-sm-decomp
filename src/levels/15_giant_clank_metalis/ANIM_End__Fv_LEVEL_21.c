/* LEVEL_21:0x070308 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_001870B4;
extern char D_001858B0[];
extern void func_06FE98(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_001870B4 != 0) {
        func_06FE98(D_001870B4, D_001858B0);
    }
}
