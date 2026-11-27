/* LEVEL_10:0x0B2588 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0B2720(void);
extern int func_129028(unsigned int kind, int count);
extern int D_00223780;
extern int D_00205180;
extern char *D_00205188;
extern char D_0021A590[];
extern char D_0021A5A0[];
void func_0B2588(void)
{
    func_0B2720();
    D_00205180 = func_129028(0xA4F0459C, 8);
    switch (D_00223780) {
    case 0x16: D_00205188 = D_0021A590; break;
    case 0x17: D_00205188 = D_0021A5A0; break;
    default: D_00205188 = 0; break;
    }
}
