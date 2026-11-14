/* LEVEL_16:0x11F8E0 -- registers the 0xFF/0x101/0x100 handler with the accepted setup helper and clears a state word. */
extern int D_002E1E04;
extern int func_11F7E0(int a, void *b);
extern void func_11E240(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_11F8E0(void)
{
    func_11E240((void *)0xFF, (void *)0x101, (void *)0x100, func_11F7E0, 2);
    D_002E1E04 = 0;
}
