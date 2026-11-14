/* LEVEL_02:0x026B30 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_00208B78[];
extern unsigned char D_00208B51;
extern unsigned char D_00208BD8;
extern int D_00208BF4;
extern int D_00208C0C;
extern char *strcpy(char *dst, const char *src);
extern int func_025D98(void *p);

int func_026B30(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_00208B78, p);
    D_00208BD8 = flag;
    if (D_00208B51 != 0) {
        return 0;
    }
    D_00208B51 = 1;
    slot = &D_00208BF4;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_025D98(p);
    }
    *slot = v;
    D_00208C0C = 1;
    return 1;
}
