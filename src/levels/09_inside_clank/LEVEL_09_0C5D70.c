/* LEVEL_09:0x0C5D70 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_001EA9B0;
extern unsigned char D_001EA9C8;
extern unsigned char D_001EA9D0;
extern int func_12BB90(int a);
extern int func_12B448(int a);
extern void func_0D4200(int a, int b, int c, int d);
extern void func_0D4238(int a);
extern int func_12BC40(void);
extern int func_12C780(void);
extern int func_12BD28(void);
extern int func_0D4D10(void);
extern void func_12E678(int *p, int a1);
extern void func_12BFA8(int value);
extern void func_12E6A8(char *record);
extern void func_12BF50(void);
extern int func_12BCB0(void);
extern int func_0D46F0(int key, int state, int arg);

void func_0C5D70(int *self)
{
    if (func_12BB90(1) != 0) {
        func_0D4200(0, func_12B448(0xA5D), 0, 0);
        func_0D4238(5);
        return;
    }
    if (func_12BC40() == 0) {
        if (func_12C780() != 0) {
            D_001EA9D0 = 0;
            func_12BD28();
            func_0D4D10();
        }
        if (D_001EA9B0 != 0) {
            func_12E678(self, 0x1F);
        }
    } else if (D_001EA9B0 != 0) {
        func_12BF50();
        func_12BCB0();
        func_12E678(self, 0x12);
        return;
    } else {
        func_0D46F0(2, 0xA5F, 0x21A);
        D_001EA9C8 = 1;
        func_12BF50();
        func_12BCB0();
        func_12E678(self, 0x1E);
        func_12BFA8(1);
        return;
    }
    func_12BFA8(1);
    if (D_001EA9B0 == 0) {
        func_12E6A8((char *)self);
    }
}
