/* LEVEL_20:0x06AE78 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_00148D34;
extern char D_00147530[];
extern void func_06AA08(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_00148D34 != 0) {
        func_06AA08(D_00148D34, D_00147530);
    }
}
