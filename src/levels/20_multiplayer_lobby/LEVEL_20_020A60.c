/* LEVEL_20:0x020A60 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001040E0[];
extern unsigned char D_001040B9;
extern unsigned char D_00104140;
extern int D_0010415C;
extern int D_00104174;
extern char *strcpy(char *dst, const char *src);
extern int func_01FCC8(void *p);

int func_020A60(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001040E0, p);
    D_00104140 = flag;
    if (D_001040B9 != 0) {
        return 0;
    }
    D_001040B9 = 1;
    slot = &D_0010415C;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_01FCC8(p);
    }
    *slot = v;
    D_00104174 = 1;
    return 1;
}
