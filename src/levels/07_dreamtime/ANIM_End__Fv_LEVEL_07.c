/* LEVEL_07:0x08DCF8 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_00254934;
extern char D_00253130[];
extern void func_08D888(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_00254934 != 0) {
        func_08D888(D_00254934, D_00253130);
    }
}
