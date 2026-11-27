/* LEVEL_10:0x190828 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_00211500[];
extern char D_0022C950[];
extern int D_001FCFB8;
extern int D_00211604;
extern int func_028210(void);
extern void func_1906C8(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_190828(int arg)
{
    char *buf;
    int r;

    r = func_028210();
    buf = D_00211500;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_0022C950, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_1906C8(0);
    D_00211604 = D_001FCFB8 + 5;
}
