/* LEVEL_18:0x1590B8 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_001BF130[];
extern char D_001D6070[];
extern int D_001A2F64;
extern int D_001BF234;
extern int func_0257B8(void);
extern void func_158F58(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_1590B8(int arg)
{
    char *buf;
    int r;

    r = func_0257B8();
    buf = D_001BF130;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_001D6070, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_158F58(0);
    D_001BF234 = D_001A2F64 + 5;
}
