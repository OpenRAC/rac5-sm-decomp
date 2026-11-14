/* LEVEL_01:0x08BC60 -- when the global record exists, forwards it with the fixed table address. */
extern void *D_0023F034;
extern char D_0023D830[];
extern void func_08B7F0(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_0023F034 != 0) {
        func_08B7F0(D_0023F034, D_0023D830);
    }
}
