/* LEVEL_05:0x17B930 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_001F7540[];
extern char D_002102E8[];
extern int D_001E3338;
extern int D_001F7644;
extern int func_027658(void);
extern void func_17B7D0(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_17B930(int arg)
{
    char *buf;
    int r;

    r = func_027658();
    buf = D_001F7540;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_002102E8, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_17B7D0(0);
    D_001F7644 = D_001E3338 + 5;
}
