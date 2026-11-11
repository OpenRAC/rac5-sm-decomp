/* LEVEL_10:0x0BDE70 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00331E48;
extern int func_0BDDD0(int a0);

int func_0BDE70(void)
{
    int handle;

    handle = D_00331E48;
    if (handle != 0) {
        func_0BDDD0(handle);
        return 1;
    }
    return 0;
}
