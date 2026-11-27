/* LEVEL_17:0x09F358 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_09F468(void);
extern int func_107580(unsigned int kind, int count);
extern int D_001C3920;
extern int D_0019D7C0;
extern char *D_0019D7C8;
extern char D_001B97C0[];
extern char D_001B97D0[];
void func_09F358(void)
{
    func_09F468();
    D_0019D7C0 = func_107580(0xA4F0459C, 8);
    switch (D_001C3920) {
    case 0x16: D_0019D7C8 = D_001B97C0; break;
    case 0x17: D_0019D7C8 = D_001B97D0; break;
    default: D_0019D7C8 = 0; break;
    }
}
