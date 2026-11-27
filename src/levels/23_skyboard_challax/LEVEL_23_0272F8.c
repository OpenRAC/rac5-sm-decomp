/* LEVEL_23:0x0272F8 -- placement copy of FRONTEND_0026B0.c: opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_001C7734;
extern int D_001FE418[];

extern int func_0271B8(void);
extern int func_0276E0(char *dst, int size, char *src, int flag);
extern int ps2fioOpen(char *path, int flags, unsigned short mode);

int func_0272F8(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    func_0276E0(path, 0x100, a, d);
    ((int (*)(int))func_0271B8)(1);
    do {
        handle = ps2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_0271B8)(1) != 0);
    goto done;
ok:
    if (D_001C7734 < 0x80) {
        D_001FE418[D_001C7734++] = handle;
    }
done:
    return handle;
}
