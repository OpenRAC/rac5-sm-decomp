/* LEVEL_07:0x0BEB80 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_0033E348;
extern int func_0BEAE0(int a0);

int func_0BEB80(void)
{
    int handle;

    handle = D_0033E348;
    if (handle != 0) {
        func_0BEAE0(handle);
        return 1;
    }
    return 0;
}
