/* LEVEL_02:0x0C3430 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_0033FF48;
extern int func_0C3390(int a0);

int func_0C3430(void)
{
    int handle;

    handle = D_0033FF48;
    if (handle != 0) {
        func_0C3390(handle);
        return 1;
    }
    return 0;
}
