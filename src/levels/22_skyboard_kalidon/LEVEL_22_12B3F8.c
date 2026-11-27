/* LEVEL_22:0x12B3F8 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_00166730[];
extern char D_0017AF78[];
extern int D_00153338;
extern int D_00166834;
extern int func_022F78(void);
extern void func_12B298(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_12B3F8(int arg)
{
    char *buf;
    int r;

    r = func_022F78();
    buf = D_00166730;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_0017AF78, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_12B298(0);
    D_00166834 = D_00153338 + 5;
}
