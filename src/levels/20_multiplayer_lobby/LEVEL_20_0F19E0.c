/* LEVEL_20:0x0F19E0 -- placement copy of LEVEL_16_11F8E0.c: registers the 0xFF/0x101/0x100 handler with the accepted setup helper and clears a state word. */
extern int D_00205344;
extern int func_0F18E0(int a, void *b);
extern void func_0F0340(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_0F19E0(void)
{
    func_0F0340((void *)0xFF, (void *)0x101, (void *)0x100, func_0F18E0, 2);
    D_00205344 = 0;
}
