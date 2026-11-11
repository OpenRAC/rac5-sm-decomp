/* LEVEL_09:0x0B9DD0 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_003101C8;
extern int func_0B9D30(int a0);

int func_0B9DD0(void)
{
    int handle;

    handle = D_003101C8;
    if (handle != 0) {
        func_0B9D30(handle);
        return 1;
    }
    return 0;
}
