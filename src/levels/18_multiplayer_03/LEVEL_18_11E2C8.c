/* LEVEL_18:0x11E2C8 -- placement copy of LEVEL_16_11F210.c: runs the setup hook, then starts the effect with the mode chosen by the global handle. */
extern int D_002E19D4;
extern char D_001BC8A0[];

extern void func_11DBF8(void);
extern int func_11DF50(int a, void *b);
extern void func_11D2F8(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_11E2C8(void)
{
    int mode;

    func_11DBF8();
    mode = 2;
    if (D_002E19D4 == (int)D_001BC8A0) {
        mode = 0;
    }
    func_11D2F8((void *)0xFF, (void *)0x101, (void *)0x100, func_11DF50, mode);
}
