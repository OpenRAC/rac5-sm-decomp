/* LEVEL_04:0x196AB8 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_00221CF8[];
extern char D_0023CE78[];
extern int D_0020D138;
extern int D_00221DFC;
extern int func_028488(void);
extern void func_196958(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_196AB8(int arg)
{
    char *buf;
    int r;

    r = func_028488();
    buf = D_00221CF8;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_0023CE78, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_196958(0);
    D_00221DFC = D_0020D138 + 5;
}
