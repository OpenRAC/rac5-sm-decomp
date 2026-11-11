/* LEVEL_10:0x0C9F00 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_00209BB0;
extern unsigned char D_00209BC8;
extern unsigned char D_00209BD0;
extern int func_130A58(int a);
extern int func_130310(int a);
extern void func_0D8390(int a, int b, int c, int d);
extern void func_0D83C8(int a);
extern int func_130B08(void);
extern int func_131668(void);
extern int func_130BF0(void);
extern int func_0D8EA0(void);
extern void func_133560(int *p, int a1);
extern void func_130E70(int value);
extern void func_133590(char *record);
extern void func_130E18(void);
extern int func_130B78(void);
extern int func_0D8880(int key, int state, int arg);

void func_0C9F00(int *self)
{
    if (func_130A58(1) != 0) {
        func_0D8390(0, func_130310(0xA5D), 0, 0);
        func_0D83C8(5);
        return;
    }
    if (func_130B08() == 0) {
        if (func_131668() != 0) {
            D_00209BD0 = 0;
            func_130BF0();
            func_0D8EA0();
        }
        if (D_00209BB0 != 0) {
            func_133560(self, 0x1F);
        }
    } else if (D_00209BB0 != 0) {
        func_130E18();
        func_130B78();
        func_133560(self, 0x12);
        return;
    } else {
        func_0D8880(2, 0xA5F, 0x21A);
        D_00209BC8 = 1;
        func_130E18();
        func_130B78();
        func_133560(self, 0x1E);
        func_130E70(1);
        return;
    }
    func_130E70(1);
    if (D_00209BB0 == 0) {
        func_133590((char *)self);
    }
}
