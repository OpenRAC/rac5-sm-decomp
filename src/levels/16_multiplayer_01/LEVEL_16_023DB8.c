/* LEVEL_16:0x023DB8 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001A1A00[];
extern unsigned char D_001A19D9;
extern unsigned char D_001A1A60;
extern int D_001A1A7C;
extern int D_001A1A94;
extern char *strcpy(char *dst, const char *src);
extern int func_023020(void *p);

int func_023DB8(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001A1A00, p);
    D_001A1A60 = flag;
    if (D_001A19D9 != 0) {
        return 0;
    }
    D_001A19D9 = 1;
    slot = &D_001A1A7C;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_023020(p);
    }
    *slot = v;
    D_001A1A94 = 1;
    return 1;
}
