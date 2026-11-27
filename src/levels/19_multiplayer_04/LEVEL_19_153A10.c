/* LEVEL_19:0x153A10 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_001BEE50[];
extern char D_001D56C0[];
extern int D_001A2C64;
extern int D_001BEF54;
extern int func_025DB0(void);
extern void func_1538B0(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_153A10(int arg)
{
    char *buf;
    int r;

    r = func_025DB0();
    buf = D_001BEE50;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_001D56C0, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_1538B0(0);
    D_001BEF54 = D_001A2C64 + 5;
}
