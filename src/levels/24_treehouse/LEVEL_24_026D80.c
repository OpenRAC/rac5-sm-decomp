/* LEVEL_24:0x026D80 -- placement copy of LEVEL_01_029840.c: opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_001C4FB8;
extern int D_001FD098[];

extern int func_026B88(void);
extern int func_0270B0(char *dst, int size, char *src, int flag);
extern int asyncPs2fioOpen(char *path, int flags, unsigned short mode);

int func_026D80(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    ((int (*)(int))func_026B88)(1);
    func_0270B0(path, 0x100, a, d);
    ((int (*)(int))func_026B88)(1);
    do {
        handle = asyncPs2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_026B88)(1) != 0);
    goto done;
ok:
    if (D_001C4FB8 < 0x80) {
        D_001FD098[D_001C4FB8++] = handle;
    }
done:
    return handle;
}
