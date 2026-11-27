/* LEVEL_08:0x1AD620 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_00251AA8[];
extern char D_0026F150[];
extern int D_0023CB38;
extern int D_00251BAC;
extern int func_028F58(void);
extern void func_1AD4C0(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_1AD620(int arg)
{
    char *buf;
    int r;

    r = func_028F58();
    buf = D_00251AA8;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_0026F150, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_1AD4C0(0);
    D_00251BAC = D_0023CB38 + 5;
}
