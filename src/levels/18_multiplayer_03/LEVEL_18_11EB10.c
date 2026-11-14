/* LEVEL_18:0x11EB10 -- placement copy of LEVEL_16_11F8E0.c: registers the 0xFF/0x101/0x100 handler with the accepted setup helper and clears a state word. */
extern int D_002E2184;
extern int func_11EA20(int a, void *b);
extern void func_11D2F8(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_11EB10(void)
{
    func_11D2F8((void *)0xFF, (void *)0x101, (void *)0x100, func_11EA20, 2);
    D_002E2184 = 0;
}
