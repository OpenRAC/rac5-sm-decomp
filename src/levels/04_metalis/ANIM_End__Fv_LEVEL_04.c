/* LEVEL_04:0x08EF30 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_00259834;
extern char D_00258030[];
extern void func_08EAC0(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_00259834 != 0) {
        func_08EAC0(D_00259834, D_00258030);
    }
}
