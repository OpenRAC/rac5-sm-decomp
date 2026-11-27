/* LEVEL_08:0x0BBDA8 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0BBF40(void);
extern int func_13C700(unsigned int kind, int count);
extern int D_00264470;
extern int D_00245040;
extern char *D_00245048;
extern char D_0025B290[];
extern char D_0025B2A0[];
void func_0BBDA8(void)
{
    func_0BBF40();
    D_00245040 = func_13C700(0xA4F0459C, 8);
    switch (D_00264470) {
    case 0x16: D_00245048 = D_0025B290; break;
    case 0x17: D_00245048 = D_0025B2A0; break;
    default: D_00245048 = 0; break;
    }
}
