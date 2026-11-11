/* LEVEL_22:0x0AAFD0 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_0027E608;
extern int func_0AAF30(int a0);

int func_0AAFD0(void)
{
    int handle;

    handle = D_0027E608;
    if (handle != 0) {
        func_0AAF30(handle);
        return 1;
    }
    return 0;
}
