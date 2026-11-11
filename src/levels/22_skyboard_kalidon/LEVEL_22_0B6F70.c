/* LEVEL_22:0x0B6F70 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_0015FF30;
extern unsigned char D_0015FF48;
extern unsigned char D_0015FF50;
extern int func_10A0C8(int a);
extern int func_109980(int a);
extern void func_0C5490(int a, int b, int c, int d);
extern void func_0C54C8(int a);
extern int func_10A178(void);
extern int func_10ACB8(void);
extern int func_10A260(void);
extern int func_0C5FA0(void);
extern void func_10CBB0(int *p, int a1);
extern void func_10A4E0(int value);
extern void func_10CBE0(char *record);
extern void func_10A488(void);
extern int func_10A1E8(void);
extern int func_0C5980(int key, int state, int arg);

void func_0B6F70(int *self)
{
    if (func_10A0C8(1) != 0) {
        func_0C5490(0, func_109980(0xA5D), 0, 0);
        func_0C54C8(5);
        return;
    }
    if (func_10A178() == 0) {
        if (func_10ACB8() != 0) {
            D_0015FF50 = 0;
            func_10A260();
            func_0C5FA0();
        }
        if (D_0015FF30 != 0) {
            func_10CBB0(self, 0x1F);
        }
    } else if (D_0015FF30 != 0) {
        func_10A488();
        func_10A1E8();
        func_10CBB0(self, 0x12);
        return;
    } else {
        func_0C5980(2, 0xA5F, 0x21A);
        D_0015FF48 = 1;
        func_10A488();
        func_10A1E8();
        func_10CBB0(self, 0x1E);
        func_10A4E0(1);
        return;
    }
    func_10A4E0(1);
    if (D_0015FF30 == 0) {
        func_10CBE0((char *)self);
    }
}
