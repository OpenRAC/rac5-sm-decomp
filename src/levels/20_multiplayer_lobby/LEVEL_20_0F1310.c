/* LEVEL_20:0x0F1310 -- placement copy of LEVEL_16_11F210.c: runs the setup hook, then starts the effect with the mode chosen by the global handle. */
extern int D_00204BAC;
extern char D_0011DAC0[];

extern void func_0F0C40(void);
extern int func_0F0F98(int a, void *b);
extern void func_0F0340(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0);

void func_0F1310(void)
{
    int mode;

    func_0F0C40();
    mode = 2;
    if (D_00204BAC == (int)D_0011DAC0) {
        mode = 0;
    }
    func_0F0340((void *)0xFF, (void *)0x101, (void *)0x100, func_0F0F98, mode);
}
