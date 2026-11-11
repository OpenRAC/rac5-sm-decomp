/* LEVEL_05:0x0C74D8 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_001EFF30;

extern int func_12E570(int arg);
extern int func_12DE28(int id);
extern void func_0D54F8(int a, int b, int c, int d);
extern void func_0D5530(int a);
extern int func_12E5F0(void);
extern int func_12E690(void);
extern void func_12E930(void);
extern void func_131058(int *p, int a1);
extern int func_0D59E8(int key, int state, int arg);
extern void func_12E988(int value);
extern void func_131088(char *record);

void func_0C74D8(int *o)
{
    if (func_12E570(1) != 0) {
        func_0D54F8(0, func_12DE28(0xA57), 0, 0);
        func_0D5530(5);
    } else if (func_12E5F0() != 0) {
        if (D_001EFF30 != 0) {
            func_12E690();
            func_12E930();
            func_131058(o, 0x15);
        } else {
            func_0D59E8(2, 0xA58, 0x21A);
            func_12E690();
            func_12E930();
            func_12E988(1);
            func_131088((char *)o);
        }
    } else {
        func_12E988(1);
        func_131058(o, 0x1D);
    }
}
