/* LEVEL_03:0x08BA80 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_00259EB4;
extern char D_002586B0[];
extern void func_08B610(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_00259EB4 != 0) {
        func_08B610(D_00259EB4, D_002586B0);
    }
}
