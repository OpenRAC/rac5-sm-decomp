/* LEVEL_05:0x025168 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001E3278[];
extern unsigned char D_001E3251;
extern unsigned char D_001E32D8;
extern int D_001E32F4;
extern int D_001E330C;
extern char *strcpy(char *dst, const char *src);
extern int func_0243D0(void *p);

int func_025168(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001E3278, p);
    D_001E32D8 = flag;
    if (D_001E3251 != 0) {
        return 0;
    }
    D_001E3251 = 1;
    slot = &D_001E32F4;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_0243D0(p);
    }
    *slot = v;
    D_001E330C = 1;
    return 1;
}
