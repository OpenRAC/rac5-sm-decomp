/* LEVEL_24:0x0C2388 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_001D1830;
extern unsigned char D_001D1848;
extern unsigned char D_001D1850;
extern int func_1286F8(int a);
extern int func_127FB0(int a);
extern void func_0D08A8(int a, int b, int c, int d);
extern void func_0D08E0(int a);
extern int func_1287A8(void);
extern int func_1292E8(void);
extern int func_128890(void);
extern int func_0D13C8(void);
extern void func_12B1E0(int *p, int a1);
extern void func_128B10(int value);
extern void func_12B210(char *record);
extern void func_128AB8(void);
extern int func_128818(void);
extern int func_0D0DA8(int key, int state, int arg);

void func_0C2388(int *self)
{
    if (func_1286F8(1) != 0) {
        func_0D08A8(0, func_127FB0(0xA5D), 0, 0);
        func_0D08E0(5);
        return;
    }
    if (func_1287A8() == 0) {
        if (func_1292E8() != 0) {
            D_001D1850 = 0;
            func_128890();
            func_0D13C8();
        }
        if (D_001D1830 != 0) {
            func_12B1E0(self, 0x1F);
        }
    } else if (D_001D1830 != 0) {
        func_128AB8();
        func_128818();
        func_12B1E0(self, 0x12);
        return;
    } else {
        func_0D0DA8(2, 0xA5F, 0x21A);
        D_001D1848 = 1;
        func_128AB8();
        func_128818();
        func_12B1E0(self, 0x1E);
        func_128B10(1);
        return;
    }
    func_128B10(1);
    if (D_001D1830 == 0) {
        func_12B210((char *)self);
    }
}
