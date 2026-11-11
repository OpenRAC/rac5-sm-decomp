/* LEVEL_10:0x1AB1D8 -- passes a word of the shared table, the constant 21 and a fraction to the effect setter. */
extern char *D_001FCFAC;
extern void func_1E0320(int a0, int a1, float f);

void func_1AB1D8(void)
{
    func_1E0320(*(int *)(D_001FCFAC + 0x13734), 0x15, 0.15f);
}
