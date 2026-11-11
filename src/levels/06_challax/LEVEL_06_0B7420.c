/* LEVEL_06:0x0B7420 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_003157C8;
extern int func_0B7380(int a0);

int func_0B7420(void)
{
    int handle;

    handle = D_003157C8;
    if (handle != 0) {
        func_0B7380(handle);
        return 1;
    }
    return 0;
}
