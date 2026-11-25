/* LEVEL_17:0x026C18 -- placement copy of LEVEL_01_029840.c: opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_00195468;
extern int D_001D1198[];

extern int func_026A20(void);
extern int func_026F48(char *dst, int size, char *src, int flag);
extern int asyncPs2fioOpen(char *path, int flags, unsigned short mode);

int func_026C18(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    ((int (*)(int))func_026A20)(1);
    func_026F48(path, 0x100, a, d);
    ((int (*)(int))func_026A20)(1);
    do {
        handle = asyncPs2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_026A20)(1) != 0);
    goto done;
ok:
    if (D_00195468 < 0x80) {
        D_001D1198[D_00195468++] = handle;
    }
done:
    return handle;
}
