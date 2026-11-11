/* LEVEL_04:0x0CE2D8 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_0021A070;
extern unsigned char D_0021A088;
extern unsigned char D_0021A090;
extern int func_13F078(int a);
extern int func_13E930(int a);
extern void func_0DC800(int a, int b, int c, int d);
extern void func_0DC838(int a);
extern int func_13F128(void);
extern int func_13FC68(void);
extern int func_13F210(void);
extern int func_0DD320(void);
extern void func_141B60(int *p, int a1);
extern void func_13F490(int value);
extern void func_141B90(char *record);
extern void func_13F438(void);
extern int func_13F198(void);
extern int func_0DCD00(int key, int state, int arg);

void func_0CE2D8(int *self)
{
    if (func_13F078(1) != 0) {
        func_0DC800(0, func_13E930(0xA5D), 0, 0);
        func_0DC838(5);
        return;
    }
    if (func_13F128() == 0) {
        if (func_13FC68() != 0) {
            D_0021A090 = 0;
            func_13F210();
            func_0DD320();
        }
        if (D_0021A070 != 0) {
            func_141B60(self, 0x1F);
        }
    } else if (D_0021A070 != 0) {
        func_13F438();
        func_13F198();
        func_141B60(self, 0x12);
        return;
    } else {
        func_0DCD00(2, 0xA5F, 0x21A);
        D_0021A088 = 1;
        func_13F438();
        func_13F198();
        func_141B60(self, 0x1E);
        func_13F490(1);
        return;
    }
    func_13F490(1);
    if (D_0021A070 == 0) {
        func_141B90((char *)self);
    }
}
