/* LEVEL_07:0x196048 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_0021CE28[];
extern char D_00238570[];
extern int D_002082B8;
extern int D_0021CF2C;
extern int func_028D20(void);
extern void func_195EE8(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_196048(int arg)
{
    char *buf;
    int r;

    r = func_028D20();
    buf = D_0021CE28;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_00238570, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_195EE8(0);
    D_0021CF2C = D_002082B8 + 5;
}
