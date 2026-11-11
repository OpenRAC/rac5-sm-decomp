/* LEVEL_01:0x0C8F30 -- menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_00200BB0;

extern int func_132BF8(int arg);
extern int func_1324B0(int id);
extern void func_0D6F50(int a, int b, int c, int d);
extern void func_0D6F88(int a);
extern int func_132C78(void);
extern int func_132D18(void);
extern void func_132FB8(void);
extern void func_1356E0(int *p, int a1);
extern int func_0D7440(int key, int state, int arg);
extern void func_133010(int value);
extern void func_135710(char *record);

void func_0C8F30(int *o)
{
    if (func_132BF8(1) != 0) {
        func_0D6F50(0, func_1324B0(0xA57), 0, 0);
        func_0D6F88(5);
    } else if (func_132C78() != 0) {
        if (D_00200BB0 != 0) {
            func_132D18();
            func_132FB8();
            func_1356E0(o, 0x15);
        } else {
            func_0D7440(2, 0xA58, 0x21A);
            func_132D18();
            func_132FB8();
            func_133010(1);
            func_135710((char *)o);
        }
    } else {
        func_133010(1);
        func_1356E0(o, 0x1D);
    }
}
