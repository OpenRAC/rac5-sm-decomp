/* LEVEL_15:0x13ABD8 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_0015E210[];
extern char D_001731A0[];
extern int D_00148C38;
extern int D_0015E314;
extern int func_022598(void);
extern void func_13AA78(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_13ABD8(int arg)
{
    char *buf;
    int r;

    r = func_022598();
    buf = D_0015E210;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_001731A0, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_13AA78(0);
    D_0015E314 = D_00148C38 + 5;
}
