/* LEVEL_02:0x092558 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_00256534;
extern char D_00254D30[];
extern void func_0920E8(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_00256534 != 0) {
        func_0920E8(D_00256534, D_00254D30);
    }
}
