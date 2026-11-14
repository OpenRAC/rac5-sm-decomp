/* LEVEL_22:0x07D040 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_00194C34;
extern char D_00193430[];
extern void func_07CBD0(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_00194C34 != 0) {
        func_07CBD0(D_00194C34, D_00193430);
    }
}
