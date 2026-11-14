/* LEVEL_10:0x025B38 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001FCEF8[];
extern unsigned char D_001FCED1;
extern unsigned char D_001FCF58;
extern int D_001FCF74;
extern int D_001FCF8C;
extern char *strcpy(char *dst, const char *src);
extern int func_024DA0(void *p);

int func_025B38(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001FCEF8, p);
    D_001FCF58 = flag;
    if (D_001FCED1 != 0) {
        return 0;
    }
    D_001FCED1 = 1;
    slot = &D_001FCF74;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_024DA0(p);
    }
    *slot = v;
    D_001FCF8C = 1;
    return 1;
}
