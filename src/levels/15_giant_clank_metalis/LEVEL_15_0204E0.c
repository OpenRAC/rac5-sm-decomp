/* LEVEL_15:0x0204E0 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_00148B78[];
extern unsigned char D_00148B51;
extern unsigned char D_00148BD8;
extern int D_00148BF4;
extern int D_00148C0C;
extern char *strcpy(char *dst, const char *src);
extern int func_01F748(void *p);

int func_0204E0(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_00148B78, p);
    D_00148BD8 = flag;
    if (D_00148B51 != 0) {
        return 0;
    }
    D_00148B51 = 1;
    slot = &D_00148BF4;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_01F748(p);
    }
    *slot = v;
    D_00148C0C = 1;
    return 1;
}
