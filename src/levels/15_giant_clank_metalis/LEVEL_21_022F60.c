/* LEVEL_21:0x022F60 -- placement copy of FRONTEND_0026B0.c: opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_00148FB4;
extern int D_00179118[];

extern int func_022E20(void);
extern int func_023348(char *dst, int size, char *src, int flag);
extern int ps2fioOpen(char *path, int flags, unsigned short mode);

int func_022F60(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    func_023348(path, 0x100, a, d);
    ((int (*)(int))func_022E20)(1);
    do {
        handle = ps2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_022E20)(1) != 0);
    goto done;
ok:
    if (D_00148FB4 < 0x80) {
        D_00179118[D_00148FB4++] = handle;
    }
done:
    return handle;
}
