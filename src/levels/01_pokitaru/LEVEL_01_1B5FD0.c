/* LEVEL_01:0x1B5FD0 -- clears the four-entry slot table. */
extern int D_00208E38[4];
void func_1B5FD0(void)
{
    int i;
    for (i = 0; i != 4; i++) {
        D_00208E38[i] = 0;
    }
}
