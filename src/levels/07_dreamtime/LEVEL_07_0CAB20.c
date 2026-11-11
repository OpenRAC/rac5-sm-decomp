/* LEVEL_07:0x0CAB20 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_00214EB0;
extern unsigned char D_00214EC8;
extern unsigned char D_00214ED0;
extern int func_135BF8(int a);
extern int func_1354B0(int a);
extern void func_0D8FB0(int a, int b, int c, int d);
extern void func_0D8FE8(int a);
extern int func_135CA8(void);
extern int func_1367E8(void);
extern int func_135D90(void);
extern int func_0D9AC0(void);
extern void func_1386E0(int *p, int a1);
extern void func_136010(int value);
extern void func_138710(char *record);
extern void func_135FB8(void);
extern int func_135D18(void);
extern int func_0D94A0(int key, int state, int arg);

void func_0CAB20(int *self)
{
    if (func_135BF8(1) != 0) {
        func_0D8FB0(0, func_1354B0(0xA5D), 0, 0);
        func_0D8FE8(5);
        return;
    }
    if (func_135CA8() == 0) {
        if (func_1367E8() != 0) {
            D_00214ED0 = 0;
            func_135D90();
            func_0D9AC0();
        }
        if (D_00214EB0 != 0) {
            func_1386E0(self, 0x1F);
        }
    } else if (D_00214EB0 != 0) {
        func_135FB8();
        func_135D18();
        func_1386E0(self, 0x12);
        return;
    } else {
        func_0D94A0(2, 0xA5F, 0x21A);
        D_00214EC8 = 1;
        func_135FB8();
        func_135D18();
        func_1386E0(self, 0x1E);
        func_136010(1);
        return;
    }
    func_136010(1);
    if (D_00214EB0 == 0) {
        func_138710((char *)self);
    }
}
