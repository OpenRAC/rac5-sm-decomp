/* LEVEL_17:0x023738 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_00195000[];
extern unsigned char D_00194FD9;
extern unsigned char D_00195060;
extern int D_0019507C;
extern int D_00195094;
extern char *strcpy(char *dst, const char *src);
extern int func_0229A0(void *p);

int func_023738(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_00195000, p);
    D_00195060 = flag;
    if (D_00194FD9 != 0) {
        return 0;
    }
    D_00194FD9 = 1;
    slot = &D_0019507C;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_0229A0(p);
    }
    *slot = v;
    D_00195094 = 1;
    return 1;
}
