/* LEVEL_24:0x023F50 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001C4B78[];
extern unsigned char D_001C4B51;
extern unsigned char D_001C4BD8;
extern int D_001C4BF4;
extern int D_001C4C0C;
extern char *strcpy(char *dst, const char *src);
extern int func_0231B8(void *p);

int func_023F50(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001C4B78, p);
    D_001C4BD8 = flag;
    if (D_001C4B51 != 0) {
        return 0;
    }
    D_001C4B51 = 1;
    slot = &D_001C4BF4;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_0231B8(p);
    }
    *slot = v;
    D_001C4C0C = 1;
    return 1;
}
