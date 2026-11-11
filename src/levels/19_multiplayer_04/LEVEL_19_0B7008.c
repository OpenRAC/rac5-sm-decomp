/* LEVEL_19:0x0B7008 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_001AFDA8;
extern unsigned char D_001AFDC0;
extern unsigned char D_001AFDC8;
extern int func_110118(int a);
extern int func_10F9D0(int a);
extern void func_0C5F20(int a, int b, int c, int d);
extern void func_0C5F58(int a);
extern int func_1101C8(void);
extern int func_110BF8(void);
extern int func_110298(void);
extern int func_0C6A30(void);
extern void func_112450(int *p, int a1);
extern void func_110438(int value);
extern void func_112480(char *record);
extern void func_110410(void);
extern int func_110238(void);
extern int func_0C6410(int key, int state, int arg);

void func_0B7008(int *self)
{
    if (func_110118(1) != 0) {
        func_0C5F20(0, func_10F9D0(0xA5D), 0, 0);
        func_0C5F58(5);
        return;
    }
    if (func_1101C8() == 0) {
        if (func_110BF8() != 0) {
            D_001AFDC8 = 0;
            func_110298();
            func_0C6A30();
        }
        if (D_001AFDA8 != 0) {
            func_112450(self, 0x1F);
        }
    } else if (D_001AFDA8 != 0) {
        func_110410();
        func_110238();
        func_112450(self, 0x12);
        return;
    } else {
        func_0C6410(2, 0xA5F, 0x21A);
        D_001AFDC0 = 1;
        func_110410();
        func_110238();
        func_112450(self, 0x1E);
        func_110438(1);
        return;
    }
    func_110438(1);
    if (D_001AFDA8 == 0) {
        func_112480((char *)self);
    }
}
