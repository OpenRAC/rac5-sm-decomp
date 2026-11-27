/* LEVEL_02:0x0B7D80 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0B7F18(void);
extern int func_131578(unsigned int kind, int count);
extern int D_0022F770;
extern int D_00211140;
extern char *D_00211148;
extern char D_00226590[];
extern char D_002265A0[];
void func_0B7D80(void)
{
    func_0B7F18();
    D_00211140 = func_131578(0xA4F0459C, 8);
    switch (D_0022F770) {
    case 0x16: D_00211148 = D_00226590; break;
    case 0x17: D_00211148 = D_002265A0; break;
    default: D_00211148 = 0; break;
    }
}
