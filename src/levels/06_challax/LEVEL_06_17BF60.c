/* LEVEL_06:0x17BF60 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_001F7410[];
extern char D_00210AD8[];
extern int D_001E2EB8;
extern int D_001F7514;
extern int func_026DC8(void);
extern void func_17BE00(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_17BF60(int arg)
{
    char *buf;
    int r;

    r = func_026DC8();
    buf = D_001F7410;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_00210AD8, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_17BE00(0);
    D_001F7514 = D_001E2EB8 + 5;
}
