/* LEVEL_24:0x084EC8 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_0020AF34;
extern char D_00209730[];
extern void func_084A58(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_0020AF34 != 0) {
        func_084A58(D_0020AF34, D_00209730);
    }
}
