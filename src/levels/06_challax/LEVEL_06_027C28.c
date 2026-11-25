/* LEVEL_06:0x027C28 -- placement copy of LEVEL_01_029840.c: opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_001E3238;
extern int D_0021DF18[];

extern int func_027A30(void);
extern int func_027F58(char *dst, int size, char *src, int flag);
extern int asyncPs2fioOpen(char *path, int flags, unsigned short mode);

int func_027C28(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    ((int (*)(int))func_027A30)(1);
    func_027F58(path, 0x100, a, d);
    ((int (*)(int))func_027A30)(1);
    do {
        handle = asyncPs2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (((int (*)(int))func_027A30)(1) != 0);
    goto done;
ok:
    if (D_001E3238 < 0x80) {
        D_0021DF18[D_001E3238++] = handle;
    }
done:
    return handle;
}
