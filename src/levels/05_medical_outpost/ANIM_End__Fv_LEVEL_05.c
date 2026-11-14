/* LEVEL_05:0x089580 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_0022AEF4;
extern char D_002296F0[];
extern void func_089110(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_0022AEF4 != 0) {
        func_089110(D_0022AEF4, D_002296F0);
    }
}
