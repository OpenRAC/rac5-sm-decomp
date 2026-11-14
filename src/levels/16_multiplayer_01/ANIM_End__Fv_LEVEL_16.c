/* LEVEL_16:0x07D208 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_001F54B4;
extern char D_001F3CB0[];
extern void func_07CD98(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_001F54B4 != 0) {
        func_07CD98(D_001F54B4, D_001F3CB0);
    }
}
