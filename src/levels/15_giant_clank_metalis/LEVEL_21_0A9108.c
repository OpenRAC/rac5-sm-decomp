/* LEVEL_21:0x0A9108 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_00155830;
extern unsigned char D_00155848;
extern unsigned char D_00155850;
extern int func_0F1AC0(int a);
extern int func_0F1378(int a);
extern void func_0B7590(int a, int b, int c, int d);
extern void func_0B75C8(int a);
extern int func_0F1B70(void);
extern int func_0F26B0(void);
extern int func_0F1C58(void);
extern int func_0B80A0(void);
extern void func_0F45A8(int *p, int a1);
extern void func_0F1ED8(int value);
extern void func_0F45D8(char *record);
extern void func_0F1E80(void);
extern int func_0F1BE0(void);
extern int func_0B7A80(int key, int state, int arg);

void func_0A9108(int *self)
{
    if (func_0F1AC0(1) != 0) {
        func_0B7590(0, func_0F1378(0xA5D), 0, 0);
        func_0B75C8(5);
        return;
    }
    if (func_0F1B70() == 0) {
        if (func_0F26B0() != 0) {
            D_00155850 = 0;
            func_0F1C58();
            func_0B80A0();
        }
        if (D_00155830 != 0) {
            func_0F45A8(self, 0x1F);
        }
    } else if (D_00155830 != 0) {
        func_0F1E80();
        func_0F1BE0();
        func_0F45A8(self, 0x12);
        return;
    } else {
        func_0B7A80(2, 0xA5F, 0x21A);
        D_00155848 = 1;
        func_0F1E80();
        func_0F1BE0();
        func_0F45A8(self, 0x1E);
        func_0F1ED8(1);
        return;
    }
    func_0F1ED8(1);
    if (D_00155830 == 0) {
        func_0F45D8((char *)self);
    }
}
