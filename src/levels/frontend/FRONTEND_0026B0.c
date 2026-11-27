/* FRONTEND:0x0026B0 -- opens the file named by the formatted path (a, flag d) with the given mode, retrying while the retry hook asks for it; a handle that opened is recorded in the global handle table (when there is room) and returned. */
extern unsigned int D_00027E6C;
extern int D_0010BA40[];

extern int func_0025B0(int);
extern int func_002988(char *dst, int size, char *src, int flag);
extern int ps2fioOpen(char *path, int flags, unsigned short mode);

int func_0026B0(char *a, int flags, int mode, int d)
{
    char path[256];
    int handle;

    func_002988(path, 0x100, a, d);
    func_0025B0(1);
    do {
        handle = ps2fioOpen(path, flags, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (func_0025B0(1) != 0);
    goto done;
ok:
    if (D_00027E6C < 0x80) {
        D_0010BA40[D_00027E6C++] = handle;
    }
done:
    return handle;
}
