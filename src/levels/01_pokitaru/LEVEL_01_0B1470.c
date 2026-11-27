/* LEVEL_01:0x0B1470 -- resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0B1608(void);
extern int func_12B1C8(unsigned int kind, int count);
extern int D_0021A7F0;
extern int D_001FC180;
extern char *D_001FC188;
extern char D_00211610[];
extern char D_00211620[];
void func_0B1470(void)
{
    func_0B1608();
    D_001FC180 = func_12B1C8(0xA4F0459C, 8);
    switch (D_0021A7F0) {
    case 0x16: D_001FC188 = D_00211610; break;
    case 0x17: D_001FC188 = D_00211620; break;
    default: D_001FC188 = 0; break;
    }
}
