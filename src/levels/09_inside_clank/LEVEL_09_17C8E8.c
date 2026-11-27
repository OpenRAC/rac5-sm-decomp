/* LEVEL_09:0x17C8E8 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_001F2308[];
extern char D_0020B898[];
extern int D_001DDDB8;
extern int D_001F240C;
extern int func_027848(void);
extern void func_17C788(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_17C8E8(int arg)
{
    char *buf;
    int r;

    r = func_027848();
    buf = D_001F2308;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_0020B898, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_17C788(0);
    D_001F240C = D_001DDDB8 + 5;
}
