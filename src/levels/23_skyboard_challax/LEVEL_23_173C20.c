/* LEVEL_23:0x173C20 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_001DBB28[];
extern char D_001F3C58[];
extern int D_001C73B8;
extern int D_001DBC2C;
extern int func_026550(void);
extern void func_173AC0(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_173C20(int arg)
{
    char *buf;
    int r;

    r = func_026550();
    buf = D_001DBB28;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_001F3C58, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_173AC0(0);
    D_001DBC2C = D_001C73B8 + 5;
}
