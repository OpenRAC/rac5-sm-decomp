/* LEVEL_23:0x081AE8 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_002104B4;
extern char D_0020ECB0[];
extern void func_081678(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_002104B4 != 0) {
        func_081678(D_002104B4, D_0020ECB0);
    }
}
