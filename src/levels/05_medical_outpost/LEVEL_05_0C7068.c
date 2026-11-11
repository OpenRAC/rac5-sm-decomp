/* LEVEL_05:0x0C7068 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_001EFF30;
extern unsigned char D_001EFF48;
extern unsigned char D_001EFF50;
extern int func_12E570(int a);
extern int func_12DE28(int a);
extern void func_0D54F8(int a, int b, int c, int d);
extern void func_0D5530(int a);
extern int func_12E620(void);
extern int func_12F160(void);
extern int func_12E708(void);
extern int func_0D6008(void);
extern void func_131058(int *p, int a1);
extern void func_12E988(int value);
extern void func_131088(char *record);
extern void func_12E930(void);
extern int func_12E690(void);
extern int func_0D59E8(int key, int state, int arg);

void func_0C7068(int *self)
{
    if (func_12E570(1) != 0) {
        func_0D54F8(0, func_12DE28(0xA5D), 0, 0);
        func_0D5530(5);
        return;
    }
    if (func_12E620() == 0) {
        if (func_12F160() != 0) {
            D_001EFF50 = 0;
            func_12E708();
            func_0D6008();
        }
        if (D_001EFF30 != 0) {
            func_131058(self, 0x1F);
        }
    } else if (D_001EFF30 != 0) {
        func_12E930();
        func_12E690();
        func_131058(self, 0x12);
        return;
    } else {
        func_0D59E8(2, 0xA5F, 0x21A);
        D_001EFF48 = 1;
        func_12E930();
        func_12E690();
        func_131058(self, 0x1E);
        func_12E988(1);
        return;
    }
    func_12E988(1);
    if (D_001EFF30 == 0) {
        func_131088((char *)self);
    }
}
