/* LEVEL_18:0x023400 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001A2E80[];
extern unsigned char D_001A2E59;
extern unsigned char D_001A2EE0;
extern int D_001A2EFC;
extern int D_001A2F14;
extern char *strcpy(char *dst, const char *src);
extern int func_022668(void *p);

int func_023400(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001A2E80, p);
    D_001A2EE0 = flag;
    if (D_001A2E59 != 0) {
        return 0;
    }
    D_001A2E59 = 1;
    slot = &D_001A2EFC;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_022668(p);
    }
    *slot = v;
    D_001A2F14 = 1;
    return 1;
}
