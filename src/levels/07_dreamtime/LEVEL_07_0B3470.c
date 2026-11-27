/* LEVEL_07:0x0B3470 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0B3608(void);
extern int func_12E1C8(unsigned int kind, int count);
extern int D_0022F4F0;
extern int D_00210480;
extern char *D_00210488;
extern char D_00226310[];
extern char D_00226320[];
void func_0B3470(void)
{
    func_0B3608();
    D_00210480 = func_12E1C8(0xA4F0459C, 8);
    switch (D_0022F4F0) {
    case 0x16: D_00210488 = D_00226310; break;
    case 0x17: D_00210488 = D_00226320; break;
    default: D_00210488 = 0; break;
    }
}
