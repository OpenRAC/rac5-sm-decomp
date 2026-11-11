/* LEVEL_01:0x0BCB20 -- when the global handle is set, runs the handler on it; returns whether it was set. */
extern int D_00328A48;
extern int func_0BCA80(int a0);

int func_0BCB20(void)
{
    int handle;

    handle = D_00328A48;
    if (handle != 0) {
        func_0BCA80(handle);
        return 1;
    }
    return 0;
}
