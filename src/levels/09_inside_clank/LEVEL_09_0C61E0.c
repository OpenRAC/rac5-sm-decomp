/* LEVEL_09:0x0C61E0 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_001EA9B0;

extern int func_12BB90(int arg);
extern int func_12B448(int id);
extern void func_0D4200(int a, int b, int c, int d);
extern void func_0D4238(int a);
extern int func_12BC10(void);
extern int func_12BCB0(void);
extern void func_12BF50(void);
extern void func_12E678(int *p, int a1);
extern int func_0D46F0(int key, int state, int arg);
extern void func_12BFA8(int value);
extern void func_12E6A8(char *record);

void func_0C61E0(int *o)
{
    if (func_12BB90(1) != 0) {
        func_0D4200(0, func_12B448(0xA57), 0, 0);
        func_0D4238(5);
    } else if (func_12BC10() != 0) {
        if (D_001EA9B0 != 0) {
            func_12BCB0();
            func_12BF50();
            func_12E678(o, 0x15);
        } else {
            func_0D46F0(2, 0xA58, 0x21A);
            func_12BCB0();
            func_12BF50();
            func_12BFA8(1);
            func_12E6A8((char *)o);
        }
    } else {
        func_12BFA8(1);
        func_12E678(o, 0x1D);
    }
}
