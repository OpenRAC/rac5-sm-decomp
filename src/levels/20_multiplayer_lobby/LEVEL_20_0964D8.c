/* LEVEL_20:0x0964D8 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_0019A1C8;
extern int func_096438(int a0);

int func_0964D8(void)
{
    int handle;

    handle = D_0019A1C8;
    if (handle != 0) {
        func_096438(handle);
        return 1;
    }
    return 0;
}
