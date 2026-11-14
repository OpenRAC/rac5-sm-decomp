/* LEVEL_08:0x026AD8 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_0023CA78[];
extern unsigned char D_0023CA51;
extern unsigned char D_0023CAD8;
extern int D_0023CAF4;
extern int D_0023CB0C;
extern char *strcpy(char *dst, const char *src);
extern int func_025CB8(void *p);

int func_026AD8(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_0023CA78, p);
    D_0023CAD8 = flag;
    if (D_0023CA51 != 0) {
        return 0;
    }
    D_0023CA51 = 1;
    slot = &D_0023CAF4;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_025CB8(p);
    }
    *slot = v;
    D_0023CB0C = 1;
    return 1;
}
