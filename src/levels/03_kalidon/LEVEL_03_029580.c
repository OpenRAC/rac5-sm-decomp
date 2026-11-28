/* LEVEL_03:0x029580 -- placement copy of FRONTEND_0026B0.c: opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_0020C9B4;
extern int D_0024BE18[];

extern int func_029440(void);
extern int func_029968(char *dst, int size, char *src, int flag);
extern int ps2fioOpen(char *path, int flags, unsigned short mode);

int func_029580(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    func_029968(path, 0x100, a, d);
    ((int (*)(int))func_029440)(1);
    do {
        handle = ps2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_029440)(1) != 0);
    goto done;
ok:
    if (D_0020C9B4 < 0x80) {
        D_0024BE18[D_0020C9B4++] = handle;
    }
done:
    return handle;
}
