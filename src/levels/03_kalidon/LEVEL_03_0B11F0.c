/* LEVEL_03:0x0B11F0 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0B13F0(void);
extern int func_129430(unsigned int kind, int count);
extern int D_002336F0;
extern int D_00214800;
extern char *D_00214808;
extern char D_0022A510[];
extern char D_0022A520[];
void func_0B11F0(void)
{
    func_0B13F0();
    D_00214800 = func_129430(0xA4F0459C, 8);
    switch (D_002336F0) {
    case 0x16: D_00214808 = D_0022A510; break;
    case 0x17: D_00214808 = D_0022A520; break;
    default: D_00214808 = 0; break;
    }
}
