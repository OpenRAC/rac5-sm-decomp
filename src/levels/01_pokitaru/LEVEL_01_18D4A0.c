/* LEVEL_01:0x18D4A0 -- formats a clamped track name, checks playback, then updates a counter. */
extern char D_00208600[];
extern char D_002237F8[];
extern int D_001F3FB8;
extern int D_00208704;
extern int func_0289E0(void);
extern void func_18D340(int a);
extern int sprintf(char *s, const char *f, ...);
extern int SND_IsATRACPlaying(const char *name, int *p) __asm__("SND_IsATRACPlaying__FPCcPi");

void func_18D4A0(int arg)
{
    char *buf;
    int r;

    r = func_0289E0();
    buf = D_00208600;
    if (r >= 5) {
        r = 0;
    }
    sprintf(buf, D_002237F8, r, arg);
    if (SND_IsATRACPlaying(buf, 0) != 0) {
        return;
    }
    func_18D340(0);
    D_00208704 = D_001F3FB8 + 5;
}
