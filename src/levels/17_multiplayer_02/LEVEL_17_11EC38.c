/* LEVEL_17:0x11EC38 -- placement copy of LEVEL_16_11F210.c: runs the setup hook, then starts the effect with the mode chosen by the global handle. */
extern int D_002D2954;
extern char D_001AEA18[];

extern void func_11E568(void);
extern int func_11E8C0(int a, void *b);
extern void func_11DC68(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_11EC38(void)
{
    int mode;

    func_11E568();
    mode = 2;
    if (D_002D2954 == (int)D_001AEA18) {
        mode = 0;
    }
    func_11DC68((void *)0xFF, (void *)0x101, (void *)0x100, func_11E8C0, mode);
}
