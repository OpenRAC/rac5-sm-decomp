/* LEVEL_05:0x0BB0C8 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00314908;
extern int func_0BB028(int a0);

int func_0BB0C8(void)
{
    int handle;

    handle = D_00314908;
    if (handle != 0) {
        func_0BB028(handle);
        return 1;
    }
    return 0;
}
