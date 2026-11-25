/* LEVEL_01:0x029840 -- opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_001F4338;
extern int D_00231198[];

extern int func_029648(void);
extern int func_029B70(char *dst, int size, char *src, int flag);
extern int asyncPs2fioOpen(char *path, int flags, unsigned short mode);

int func_029840(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    ((int (*)(int))func_029648)(1);
    func_029B70(path, 0x100, a, d);
    ((int (*)(int))func_029648)(1);
    do {
        handle = asyncPs2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_029648)(1) != 0);
    goto done;
ok:
    if (D_001F4338 < 0x80) {
        D_00231198[D_001F4338++] = handle;
    }
done:
    return handle;
}
