/* LEVEL_02:0x0CF840 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_00215B70;

extern int func_138FA8(int arg);
extern int func_138860(int id);
extern void func_0DD8E0(int a, int b, int c, int d);
extern void func_0DD918(int a);
extern int func_139028(void);
extern int func_1390C8(void);
extern void func_139368(void);
extern void func_13BA90(int *p, int a1);
extern int func_0DDDD0(int key, int state, int arg);
extern void func_1393C0(int value);
extern void func_13BAC0(char *record);

void func_0CF840(int *o)
{
    if (func_138FA8(1) != 0) {
        func_0DD8E0(0, func_138860(0xA57), 0, 0);
        func_0DD918(5);
    } else if (func_139028() != 0) {
        if (D_00215B70 != 0) {
            func_1390C8();
            func_139368();
            func_13BA90(o, 0x15);
        } else {
            func_0DDDD0(2, 0xA58, 0x21A);
            func_1390C8();
            func_139368();
            func_1393C0(1);
            func_13BAC0((char *)o);
        }
    } else {
        func_1393C0(1);
        func_13BA90(o, 0x1D);
    }
}
