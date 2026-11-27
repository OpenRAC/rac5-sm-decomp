/* LEVEL_17:0x026B60 -- placement copy of FRONTEND_0026B0.c: opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_00195464;
extern int D_001D0F98[];

extern int func_026A20(void);
extern int func_026F48(char *dst, int size, char *src, int flag);
extern int ps2fioOpen(char *path, int flags, unsigned short mode);

int func_026B60(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    func_026F48(path, 0x100, a, d);
    ((int (*)(int))func_026A20)(1);
    do {
        handle = ps2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_026A20)(1) != 0);
    goto done;
ok:
    if (D_00195464 < 0x80) {
        D_001D0F98[D_00195464++] = handle;
    }
done:
    return handle;
}
