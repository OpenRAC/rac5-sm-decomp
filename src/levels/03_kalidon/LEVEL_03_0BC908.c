/* LEVEL_03:0x0BC908 -- placement copy of LEVEL_01_0BCB20.c: when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_003438C8;
extern int func_0BC868(int a0);

int func_0BC908(void)
{
    int handle;

    handle = D_003438C8;
    if (handle != 0) {
        func_0BC868(handle);
        return 1;
    }
    return 0;
}
