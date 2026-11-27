/* LEVEL_03:0x189448 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_00220ED0[];
extern char D_0023C268[];
extern int D_0020C638;
extern int D_00220FD4;
extern int func_0287D8(void);
extern void func_1892E8(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_189448(int arg)
{
    char *buf;
    int r;

    r = func_0287D8();
    buf = D_00220ED0;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_0023C268, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_1892E8(0);
    D_00220FD4 = D_0020C638 + 5;
}
