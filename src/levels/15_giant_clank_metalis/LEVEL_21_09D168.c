/* LEVEL_21:0x09D168 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00240288;
extern int func_09D0C8(int a0);

int func_09D168(void)
{
    int handle;

    handle = D_00240288;
    if (handle != 0) {
        func_09D0C8(handle);
        return 1;
    }
    return 0;
}
