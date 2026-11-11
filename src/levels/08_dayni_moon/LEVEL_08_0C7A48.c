/* LEVEL_08:0x0C7A48 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00377CC8;
extern int func_0C79A8(int a0);

int func_0C7A48(void)
{
    int handle;

    handle = D_00377CC8;
    if (handle != 0) {
        func_0C79A8(handle);
        return 1;
    }
    return 0;
}
