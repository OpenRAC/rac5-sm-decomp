/* LEVEL_08:0x0D39E8 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_00249A70;
extern unsigned char D_00249A88;
extern unsigned char D_00249A90;
extern int func_144130(int a);
extern int func_1439E8(int a);
extern void func_0E1F10(int a, int b, int c, int d);
extern void func_0E1F48(int a);
extern int func_1441E0(void);
extern int func_144D20(void);
extern int func_1442C8(void);
extern int func_0E2A30(void);
extern void func_146C18(int *p, int a1);
extern void func_144548(int value);
extern void func_146C48(char *record);
extern void func_1444F0(void);
extern int func_144250(void);
extern int func_0E2410(int key, int state, int arg);

void func_0D39E8(int *self)
{
    if (func_144130(1) != 0) {
        func_0E1F10(0, func_1439E8(0xA5D), 0, 0);
        func_0E1F48(5);
        return;
    }
    if (func_1441E0() == 0) {
        if (func_144D20() != 0) {
            D_00249A90 = 0;
            func_1442C8();
            func_0E2A30();
        }
        if (D_00249A70 != 0) {
            func_146C18(self, 0x1F);
        }
    } else if (D_00249A70 != 0) {
        func_1444F0();
        func_144250();
        func_146C18(self, 0x12);
        return;
    } else {
        func_0E2410(2, 0xA5F, 0x21A);
        D_00249A88 = 1;
        func_1444F0();
        func_144250();
        func_146C18(self, 0x1E);
        func_144548(1);
        return;
    }
    func_144548(1);
    if (D_00249A70 == 0) {
        func_146C48((char *)self);
    }
}
