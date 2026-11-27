/* LEVEL_17:0x154520 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_001B1278[];
extern char D_001C7710[];
extern int D_001950E4;
extern int D_001B137C;
extern int func_025B88(void);
extern void func_1543C0(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_154520(int arg)
{
    char *buf;
    int r;

    r = func_025B88();
    buf = D_001B1278;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_001C7710, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_1543C0(0);
    D_001B137C = D_001950E4 + 5;
}
