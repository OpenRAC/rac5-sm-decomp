/* LEVEL_08:0x093D90 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_0028E2B4;
extern char D_0028CAB0[];
extern void func_093920(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_0028E2B4 != 0) {
        func_093920(D_0028E2B4, D_0028CAB0);
    }
}
