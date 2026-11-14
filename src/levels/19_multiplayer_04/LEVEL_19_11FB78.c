/* LEVEL_19:0x11FB78 -- placement copy of LEVEL_16_11F210.c: runs the setup hook, then starts the effect with the mode chosen by the global handle. */
extern int D_002E17D4;
extern char D_001BC598[];

extern void func_11F4A8(void);
extern int func_11F800(int a, void *b);
extern void func_11EBA8(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_11FB78(void)
{
    int mode;

    func_11F4A8();
    mode = 2;
    if (D_002E17D4 == (int)D_001BC598) {
        mode = 0;
    }
    func_11EBA8((void *)0xFF, (void *)0x101, (void *)0x100, func_11F800, mode);
}
