/* LEVEL_16:0x11F210 -- runs the setup hook, then starts the effect with the mode chosen by the global handle. */
extern int D_002E1654;
extern char D_001BB420[];

extern void func_11EB40(void);
extern int func_11EE98(int a, void *b);
extern void func_11E240(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_11F210(void)
{
    int mode;

    func_11EB40();
    mode = 2;
    if (D_002E1654 == (int)D_001BB420) {
        mode = 0;
    }
    func_11E240((void *)0xFF, (void *)0x101, (void *)0x100, func_11EE98, mode);
}
