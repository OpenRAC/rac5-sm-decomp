/* LEVEL_16:0x0ABFA8 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00276988;
extern int func_0ABF08(int a0);

int func_0ABFA8(void)
{
    int handle;

    handle = D_00276988;
    if (handle != 0) {
        func_0ABF08(handle);
        return 1;
    }
    return 0;
}
