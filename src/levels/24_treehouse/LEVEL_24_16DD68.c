/* LEVEL_24:0x16DD68 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_001D9580[];
extern char D_001F10E8[];
extern int D_001C4C38;
extern int D_001D9684;
extern int func_025F20(void);
extern void func_16DC08(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_16DD68(int arg)
{
    char *buf;
    int r;

    r = func_025F20();
    buf = D_001D9580;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_001F10E8, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_16DC08(0);
    D_001D9684 = D_001C4C38 + 5;
}
