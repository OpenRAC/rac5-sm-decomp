/* LEVEL_19:0x09F6F0 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_09F800(void);
extern int func_1086A8(unsigned int kind, int count);
extern int D_001D16A0;
extern int D_001AB340;
extern char *D_001AB348;
extern char D_001C7540[];
extern char D_001C7550[];
void func_09F6F0(void)
{
    func_09F800();
    D_001AB340 = func_1086A8(0xA4F0459C, 8);
    switch (D_001D16A0) {
    case 0x16: D_001AB348 = D_001C7540; break;
    case 0x17: D_001AB348 = D_001C7550; break;
    default: D_001AB348 = 0; break;
    }
}
