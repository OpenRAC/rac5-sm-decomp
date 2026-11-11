/* LEVEL_01:0x0C8AC0 -- frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_00200BB0;
extern unsigned char D_00200BC8;
extern unsigned char D_00200BD0;
extern int func_132BF8(int a);
extern int func_1324B0(int a);
extern void func_0D6F50(int a, int b, int c, int d);
extern void func_0D6F88(int a);
extern int func_132CA8(void);
extern int func_1337E8(void);
extern int func_132D90(void);
extern int func_0D7A60(void);
extern void func_1356E0(int *p, int a1);
extern void func_133010(int value);
extern void func_135710(char *record);
extern void func_132FB8(void);
extern int func_132D18(void);
extern int func_0D7440(int key, int state, int arg);

void func_0C8AC0(int *self)
{
    if (func_132BF8(1) != 0) {
        func_0D6F50(0, func_1324B0(0xA5D), 0, 0);
        func_0D6F88(5);
        return;
    }
    if (func_132CA8() == 0) {
        if (func_1337E8() != 0) {
            D_00200BD0 = 0;
            func_132D90();
            func_0D7A60();
        }
        if (D_00200BB0 != 0) {
            func_1356E0(self, 0x1F);
        }
    } else if (D_00200BB0 != 0) {
        func_132FB8();
        func_132D18();
        func_1356E0(self, 0x12);
        return;
    } else {
        func_0D7440(2, 0xA5F, 0x21A);
        D_00200BC8 = 1;
        func_132FB8();
        func_132D18();
        func_1356E0(self, 0x1E);
        func_133010(1);
        return;
    }
    func_133010(1);
    if (D_00200BB0 == 0) {
        func_135710((char *)self);
    }
}
