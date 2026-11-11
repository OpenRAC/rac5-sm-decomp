/* LEVEL_07:0x0CAF90 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_00214EB0;

extern int func_135BF8(int arg);
extern int func_1354B0(int id);
extern void func_0D8FB0(int a, int b, int c, int d);
extern void func_0D8FE8(int a);
extern int func_135C78(void);
extern int func_135D18(void);
extern void func_135FB8(void);
extern void func_1386E0(int *p, int a1);
extern int func_0D94A0(int key, int state, int arg);
extern void func_136010(int value);
extern void func_138710(char *record);

void func_0CAF90(int *o)
{
    if (func_135BF8(1) != 0) {
        func_0D8FB0(0, func_1354B0(0xA57), 0, 0);
        func_0D8FE8(5);
    } else if (func_135C78() != 0) {
        if (D_00214EB0 != 0) {
            func_135D18();
            func_135FB8();
            func_1386E0(o, 0x15);
        } else {
            func_0D94A0(2, 0xA58, 0x21A);
            func_135D18();
            func_135FB8();
            func_136010(1);
            func_138710((char *)o);
        }
    } else {
        func_136010(1);
        func_1386E0(o, 0x1D);
    }
}
