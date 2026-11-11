/* LEVEL_23:0x0B38C0 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_002F9E88;
extern int func_0B3820(int a0);

int func_0B38C0(void)
{
    int handle;

    handle = D_002F9E88;
    if (handle != 0) {
        func_0B3820(handle);
        return 1;
    }
    return 0;
}
