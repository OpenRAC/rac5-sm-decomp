/* LEVEL_04:0x0B66C0 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0B6858(void);
extern int func_137648(unsigned int kind, int count);
extern int D_00234170;
extern int D_00215640;
extern char *D_00215648;
extern char D_0022AF90[];
extern char D_0022AFA0[];
void func_0B66C0(void)
{
    func_0B6858();
    D_00215640 = func_137648(0xA4F0459C, 8);
    switch (D_00234170) {
    case 0x16: D_00215648 = D_0022AF90; break;
    case 0x17: D_00215648 = D_0022AFA0; break;
    default: D_00215648 = 0; break;
    }
}
