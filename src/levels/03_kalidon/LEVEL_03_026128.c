/* LEVEL_03:0x026128 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_0020C578[];
extern unsigned char D_0020C551;
extern unsigned char D_0020C5D8;
extern int D_0020C5F4;
extern int D_0020C60C;
extern char *strcpy(char *dst, const char *src);
extern int func_025308(void *p);

int func_026128(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_0020C578, p);
    D_0020C5D8 = flag;
    if (D_0020C551 != 0) {
        return 0;
    }
    D_0020C551 = 1;
    slot = &D_0020C5F4;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_025308(p);
    }
    *slot = v;
    D_0020C60C = 1;
    return 1;
}
