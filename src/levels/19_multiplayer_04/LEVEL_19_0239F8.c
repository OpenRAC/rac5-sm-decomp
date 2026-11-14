/* LEVEL_19:0x0239F8 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001A2B80[];
extern unsigned char D_001A2B59;
extern unsigned char D_001A2BE0;
extern int D_001A2BFC;
extern int D_001A2C14;
extern char *strcpy(char *dst, const char *src);
extern int func_022C60(void *p);

int func_0239F8(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001A2B80, p);
    D_001A2BE0 = flag;
    if (D_001A2B59 != 0) {
        return 0;
    }
    D_001A2B59 = 1;
    slot = &D_001A2BFC;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_022C60(p);
    }
    *slot = v;
    D_001A2C14 = 1;
    return 1;
}
