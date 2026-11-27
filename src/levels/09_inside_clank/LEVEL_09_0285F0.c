/* LEVEL_09:0x0285F0 -- placement copy of FRONTEND_0026B0.c: opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_001DE134;
extern int D_00218718[];

extern int func_0284B0(void);
extern int func_0289D8(char *dst, int size, char *src, int flag);
extern int ps2fioOpen(char *path, int flags, unsigned short mode);

int func_0285F0(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    func_0289D8(path, 0x100, a, d);
    ((int (*)(int))func_0284B0)(1);
    do {
        handle = ps2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_0284B0)(1) != 0);
    goto done;
ok:
    if (D_001DE134 < 0x80) {
        D_00218718[D_001DE134++] = handle;
    }
done:
    return handle;
}
