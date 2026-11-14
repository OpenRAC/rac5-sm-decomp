/* LEVEL_07:0x026820 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_002081F8[];
extern unsigned char D_002081D1;
extern unsigned char D_00208258;
extern int D_00208274;
extern int D_0020828C;
extern char *strcpy(char *dst, const char *src);
extern int func_025A00(void *p);

int func_026820(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_002081F8, p);
    D_00208258 = flag;
    if (D_002081D1 != 0) {
        return 0;
    }
    D_002081D1 = 1;
    slot = &D_00208274;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_025A00(p);
    }
    *slot = v;
    D_0020828C = 1;
    return 1;
}
