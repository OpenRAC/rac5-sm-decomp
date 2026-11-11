/* LEVEL_17:0x0B6C70 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_001A2228;
extern unsigned char D_001A2240;
extern unsigned char D_001A2248;
extern int func_10EFF0(int a);
extern int func_10E8A8(int a);
extern void func_0C5B88(int a, int b, int c, int d);
extern void func_0C5BC0(int a);
extern int func_10F0A0(void);
extern int func_10FAD0(void);
extern int func_10F170(void);
extern int func_0C6698(void);
extern void func_111328(int *p, int a1);
extern void func_10F310(int value);
extern void func_111358(char *record);
extern void func_10F2E8(void);
extern int func_10F110(void);
extern int func_0C6078(int key, int state, int arg);

void func_0B6C70(int *self)
{
    if (func_10EFF0(1) != 0) {
        func_0C5B88(0, func_10E8A8(0xA5D), 0, 0);
        func_0C5BC0(5);
        return;
    }
    if (func_10F0A0() == 0) {
        if (func_10FAD0() != 0) {
            D_001A2248 = 0;
            func_10F170();
            func_0C6698();
        }
        if (D_001A2228 != 0) {
            func_111328(self, 0x1F);
        }
    } else if (D_001A2228 != 0) {
        func_10F2E8();
        func_10F110();
        func_111328(self, 0x12);
        return;
    } else {
        func_0C6078(2, 0xA5F, 0x21A);
        D_001A2240 = 1;
        func_10F2E8();
        func_10F110();
        func_111328(self, 0x1E);
        func_10F310(1);
        return;
    }
    func_10F310(1);
    if (D_001A2228 == 0) {
        func_111358((char *)self);
    }
}
