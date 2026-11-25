/* LEVEL_07:0x029B80 -- placement copy of LEVEL_01_029840.c: opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_00208638;
extern int D_00246A98[];

extern int func_029988(void);
extern int func_029EB0(char *dst, int size, char *src, int flag);
extern int asyncPs2fioOpen(char *path, int flags, unsigned short mode);

int func_029B80(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    ((int (*)(int))func_029988)(1);
    func_029EB0(path, 0x100, a, d);
    ((int (*)(int))func_029988)(1);
    do {
        handle = asyncPs2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_029988)(1) != 0);
    goto done;
ok:
    if (D_00208638 < 0x80) {
        D_00246A98[D_00208638++] = handle;
    }
done:
    return handle;
}
