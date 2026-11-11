/* LEVEL_18:0x0B6708 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_001B00A8;
extern unsigned char D_001B00C0;
extern unsigned char D_001B00C8;
extern int func_10E728(int a);
extern int func_10DFE0(int a);
extern void func_0C5620(int a, int b, int c, int d);
extern void func_0C5658(int a);
extern int func_10E7D8(void);
extern int func_10F208(void);
extern int func_10E8A8(void);
extern int func_0C6130(void);
extern void func_110A60(int *p, int a1);
extern void func_10EA48(int value);
extern void func_110A90(char *record);
extern void func_10EA20(void);
extern int func_10E848(void);
extern int func_0C5B10(int key, int state, int arg);

void func_0B6708(int *self)
{
    if (func_10E728(1) != 0) {
        func_0C5620(0, func_10DFE0(0xA5D), 0, 0);
        func_0C5658(5);
        return;
    }
    if (func_10E7D8() == 0) {
        if (func_10F208() != 0) {
            D_001B00C8 = 0;
            func_10E8A8();
            func_0C6130();
        }
        if (D_001B00A8 != 0) {
            func_110A60(self, 0x1F);
        }
    } else if (D_001B00A8 != 0) {
        func_10EA20();
        func_10E848();
        func_110A60(self, 0x12);
        return;
    } else {
        func_0C5B10(2, 0xA5F, 0x21A);
        D_001B00C0 = 1;
        func_10EA20();
        func_10E848();
        func_110A60(self, 0x1E);
        func_10EA48(1);
        return;
    }
    func_10EA48(1);
    if (D_001B00A8 == 0) {
        func_110A90((char *)self);
    }
}
