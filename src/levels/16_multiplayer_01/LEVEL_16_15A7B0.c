/* LEVEL_16:0x15A7B0 -- placement copy of LEVEL_01_18D4A0.c: formats a clamped track name, checks playback, then updates a counter. */
extern char D_001BDC60[];
extern char D_001D5088[];
extern int D_001A1AE4;
extern int D_001BDD64;
extern int func_026208(void);
extern void func_15A650(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_15A7B0(int arg)
{
    char *buf;
    int r;

    r = func_026208();
    buf = D_001BDC60;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_001D5088, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_15A650(0);
    D_001BDD64 = D_001A1AE4 + 5;
}
