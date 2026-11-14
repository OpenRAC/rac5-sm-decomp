/* LEVEL_19:0x1203C0 -- placement copy of LEVEL_16_11F8E0.c: registers the 0xFF/0x101/0x100 handler with the accepted setup helper and clears a state word. */
extern int D_002E1F84;
extern int func_1202D0(int a, void *b);
extern void func_11EBA8(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_1203C0(void)
{
    func_11EBA8((void *)0xFF, (void *)0x101, (void *)0x100, func_1202D0, 2);
    D_002E1F84 = 0;
}
