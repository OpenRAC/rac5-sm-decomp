/* LEVEL_18:0x0AAF80 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00276D08;
extern int func_0AAEE0(int a0);

int func_0AAF80(void)
{
    int handle;

    handle = D_00276D08;
    if (handle != 0) {
        func_0AAEE0(handle);
        return 1;
    }
    return 0;
}
