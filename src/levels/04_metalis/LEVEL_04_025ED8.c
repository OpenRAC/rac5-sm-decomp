/* LEVEL_04:0x025ED8 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_0020D078[];
extern unsigned char D_0020D051;
extern unsigned char D_0020D0D8;
extern int D_0020D0F4;
extern int D_0020D10C;
extern char *strcpy(char *dst, const char *src);
extern int func_0250B8(void *p);

int func_025ED8(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_0020D078, p);
    D_0020D0D8 = flag;
    if (D_0020D051 != 0) {
        return 0;
    }
    D_0020D051 = 1;
    slot = &D_0020D0F4;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_0250B8(p);
    }
    *slot = v;
    D_0020D10C = 1;
    return 1;
}
