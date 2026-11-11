/* LEVEL_04:0x0C2338 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00343248;
extern int func_0C2298(int a0);

int func_0C2338(void)
{
    int handle;

    handle = D_00343248;
    if (handle != 0) {
        func_0C2298(handle);
        return 1;
    }
    return 0;
}
