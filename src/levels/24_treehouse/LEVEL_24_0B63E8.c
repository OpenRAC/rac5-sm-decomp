/* LEVEL_24:0x0B63E8 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_002F4908;
extern int func_0B6348(int a0);

int func_0B63E8(void)
{
    int handle;

    handle = D_002F4908;
    if (handle != 0) {
        func_0B6348(handle);
        return 1;
    }
    return 0;
}
