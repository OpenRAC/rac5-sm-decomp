/* LEVEL_16:0x0B7730 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_001AEC28;
extern unsigned char D_001AEC40;
extern unsigned char D_001AEC48;
extern int func_10FA78(int a);
extern int func_10F330(int a);
extern void func_0C6648(int a, int b, int c, int d);
extern void func_0C6680(int a);
extern int func_10FB28(void);
extern int func_110558(void);
extern int func_10FBF8(void);
extern int func_0C7158(void);
extern void func_111DB0(int *p, int a1);
extern void func_10FD98(int value);
extern void func_111DE0(char *record);
extern void func_10FD70(void);
extern int func_10FB98(void);
extern int func_0C6B38(int key, int state, int arg);

void func_0B7730(int *self)
{
    if (func_10FA78(1) != 0) {
        func_0C6648(0, func_10F330(0xA5D), 0, 0);
        func_0C6680(5);
        return;
    }
    if (func_10FB28() == 0) {
        if (func_110558() != 0) {
            D_001AEC48 = 0;
            func_10FBF8();
            func_0C7158();
        }
        if (D_001AEC28 != 0) {
            func_111DB0(self, 0x1F);
        }
    } else if (D_001AEC28 != 0) {
        func_10FD70();
        func_10FB98();
        func_111DB0(self, 0x12);
        return;
    } else {
        func_0C6B38(2, 0xA5F, 0x21A);
        D_001AEC40 = 1;
        func_10FD70();
        func_10FB98();
        func_111DB0(self, 0x1E);
        func_10FD98(1);
        return;
    }
    func_10FD98(1);
    if (D_001AEC28 == 0) {
        func_111DE0((char *)self);
    }
}
