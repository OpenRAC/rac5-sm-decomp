/* LEVEL_03:0x0C88A8 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_00219230;
extern unsigned char D_00219248;
extern unsigned char D_00219250;
extern int func_130FC0(int a);
extern int func_130878(int a);
extern void func_0D6D38(int a, int b, int c, int d);
extern void func_0D6D70(int a);
extern int func_131070(void);
extern int func_131BB0(void);
extern int func_131158(void);
extern int func_0D7848(void);
extern void func_133AA8(int *p, int a1);
extern void func_1313D8(int value);
extern void func_133AD8(char *record);
extern void func_131380(void);
extern int func_1310E0(void);
extern int func_0D7228(int key, int state, int arg);

void func_0C88A8(int *self)
{
    if (func_130FC0(1) != 0) {
        func_0D6D38(0, func_130878(0xA5D), 0, 0);
        func_0D6D70(5);
        return;
    }
    if (func_131070() == 0) {
        if (func_131BB0() != 0) {
            D_00219250 = 0;
            func_131158();
            func_0D7848();
        }
        if (D_00219230 != 0) {
            func_133AA8(self, 0x1F);
        }
    } else if (D_00219230 != 0) {
        func_131380();
        func_1310E0();
        func_133AA8(self, 0x12);
        return;
    } else {
        func_0D7228(2, 0xA5F, 0x21A);
        D_00219248 = 1;
        func_131380();
        func_1310E0();
        func_133AA8(self, 0x1E);
        func_1313D8(1);
        return;
    }
    func_1313D8(1);
    if (D_00219230 == 0) {
        func_133AD8((char *)self);
    }
}
