/* LEVEL_22:0x020FB0 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_00153278[];
extern unsigned char D_00153251;
extern unsigned char D_001532D8;
extern int D_001532F4;
extern int D_0015330C;
extern char *strcpy(char *dst, const char *src);
extern int func_020218(void *p);

int func_020FB0(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_00153278, p);
    D_001532D8 = flag;
    if (D_00153251 != 0) {
        return 0;
    }
    D_00153251 = 1;
    slot = &D_001532F4;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_020218(p);
    }
    *slot = v;
    D_0015330C = 1;
    return 1;
}
