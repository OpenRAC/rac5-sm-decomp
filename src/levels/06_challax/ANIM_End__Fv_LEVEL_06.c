/* LEVEL_06:0x084AA0 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_0022BDB4;
extern char D_0022A5B0[];
extern void func_084630(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_0022BDB4 != 0) {
        func_084630(D_0022BDB4, D_0022A5B0);
    }
}
