/* LEVEL_19:0x0AB880 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00276B08;
extern int func_0AB7E0(int a0);

int func_0AB880(void)
{
    int handle;

    handle = D_00276B08;
    if (handle != 0) {
        func_0AB7E0(handle);
        return 1;
    }
    return 0;
}
