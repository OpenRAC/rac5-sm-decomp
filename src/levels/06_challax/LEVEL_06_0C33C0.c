/* LEVEL_06:0x0C33C0 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_001EFAB0;
extern unsigned char D_001EFAC8;
extern unsigned char D_001EFAD0;
extern int func_1292C8(int a);
extern int func_128B80(int a);
extern void func_0D1850(int a, int b, int c, int d);
extern void func_0D1888(int a);
extern int func_129378(void);
extern int func_129EB8(void);
extern int func_129460(void);
extern int func_0D2360(void);
extern void func_12BDB0(int *p, int a1);
extern void func_1296E0(int value);
extern void func_12BDE0(char *record);
extern void func_129688(void);
extern int func_1293E8(void);
extern int func_0D1D40(int key, int state, int arg);

void func_0C33C0(int *self)
{
    if (func_1292C8(1) != 0) {
        func_0D1850(0, func_128B80(0xA5D), 0, 0);
        func_0D1888(5);
        return;
    }
    if (func_129378() == 0) {
        if (func_129EB8() != 0) {
            D_001EFAD0 = 0;
            func_129460();
            func_0D2360();
        }
        if (D_001EFAB0 != 0) {
            func_12BDB0(self, 0x1F);
        }
    } else if (D_001EFAB0 != 0) {
        func_129688();
        func_1293E8();
        func_12BDB0(self, 0x12);
        return;
    } else {
        func_0D1D40(2, 0xA5F, 0x21A);
        D_001EFAC8 = 1;
        func_129688();
        func_1293E8();
        func_12BDB0(self, 0x1E);
        func_1296E0(1);
        return;
    }
    func_1296E0(1);
    if (D_001EFAB0 == 0) {
        func_12BDE0((char *)self);
    }
}
