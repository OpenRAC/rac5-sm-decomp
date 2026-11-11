/* LEVEL_20:0x0A1C60 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_00111308;
extern unsigned char D_00111320;
extern unsigned char D_00111328;
extern int func_0E2860(int a);
extern int func_0E2118(int a);
extern void func_0B0B78(int a, int b, int c, int d);
extern void func_0B0BB0(int a);
extern int func_0E2910(void);
extern int func_0E3340(void);
extern int func_0E29E0(void);
extern int func_0B1688(void);
extern void func_0E4B98(int *p, int a1);
extern void func_0E2B80(int value);
extern void func_0E4BC8(char *record);
extern void func_0E2B58(void);
extern int func_0E2980(void);
extern int func_0B1068(int key, int state, int arg);

void func_0A1C60(int *self)
{
    if (func_0E2860(1) != 0) {
        func_0B0B78(0, func_0E2118(0xA5D), 0, 0);
        func_0B0BB0(5);
        return;
    }
    if (func_0E2910() == 0) {
        if (func_0E3340() != 0) {
            D_00111328 = 0;
            func_0E29E0();
            func_0B1688();
        }
        if (D_00111308 != 0) {
            func_0E4B98(self, 0x1F);
        }
    } else if (D_00111308 != 0) {
        func_0E2B58();
        func_0E2980();
        func_0E4B98(self, 0x12);
        return;
    } else {
        func_0B1068(2, 0xA5F, 0x21A);
        D_00111320 = 1;
        func_0E2B58();
        func_0E2980();
        func_0E4B98(self, 0x1E);
        func_0E2B80(1);
        return;
    }
    func_0E2B80(1);
    if (D_00111308 == 0) {
        func_0E4BC8((char *)self);
    }
}
