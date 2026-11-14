/* LEVEL_06:0x0248D8 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001E2DF8[];
extern unsigned char D_001E2DD1;
extern unsigned char D_001E2E58;
extern int D_001E2E74;
extern int D_001E2E8C;
extern char *strcpy(char *dst, const char *src);
extern int func_023B40(void *p);

int func_0248D8(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001E2DF8, p);
    D_001E2E58 = flag;
    if (D_001E2DD1 != 0) {
        return 0;
    }
    D_001E2DD1 = 1;
    slot = &D_001E2E74;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_023B40(p);
    }
    *slot = v;
    D_001E2E8C = 1;
    return 1;
}
