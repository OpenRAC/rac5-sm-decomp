/* LEVEL_09:0x0885E0 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_002267B4;
extern char D_00224FB0[];
extern void func_088170(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_002267B4 != 0) {
        func_088170(D_002267B4, D_00224FB0);
    }
}
