/* LEVEL_04:0x14EF88 -- clears a global flag and returns 1. */
extern int D_002208DC;

int func_14EF88(void)
{
    D_002208DC = 0;
    return 1;
}
