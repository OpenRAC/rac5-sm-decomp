/* LEVEL_17:0x11F308 -- placement copy of LEVEL_16_11F8E0.c: registers the 0xFF/0x101/0x100 handler with the accepted setup helper and clears a state word. */
extern int D_002D3104;
extern int func_11F208(int a, void *b);
extern void func_11DC68(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_11F308(void)
{
    func_11DC68((void *)0xFF, (void *)0x101, (void *)0x100, func_11F208, 2);
    D_002D3104 = 0;
}
