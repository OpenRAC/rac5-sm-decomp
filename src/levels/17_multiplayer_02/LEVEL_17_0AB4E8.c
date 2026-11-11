/* LEVEL_17:0x0AB4E8 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00267C88;
extern int func_0AB448(int a0);

int func_0AB4E8(void)
{
    int handle;

    handle = D_00267C88;
    if (handle != 0) {
        func_0AB448(handle);
        return 1;
    }
    return 0;
}
