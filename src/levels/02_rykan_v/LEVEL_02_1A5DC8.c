/* LEVEL_02:0x1A5DC8 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_0021D648[];
extern char D_0023B788[];
extern int D_00208C38;
extern int D_0021D74C;
extern int func_0291A8(void);
extern void func_1A5C68(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_1A5DC8(int arg)
{
    char *buf;
    int r;

    r = func_0291A8();
    buf = D_0021D648;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_0023B788, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_1A5C68(0);
    D_0021D74C = D_00208C38 + 5;
}
