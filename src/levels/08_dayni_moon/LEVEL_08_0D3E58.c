/* LEVEL_08:0x0D3E58 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_00249A70;

extern int func_144130(int arg);
extern int func_1439E8(int id);
extern void func_0E1F10(int a, int b, int c, int d);
extern void func_0E1F48(int a);
extern int func_1441B0(void);
extern int func_144250(void);
extern void func_1444F0(void);
extern void func_146C18(int *p, int a1);
extern int func_0E2410(int key, int state, int arg);
extern void func_144548(int value);
extern void func_146C48(char *record);

void func_0D3E58(int *o)
{
    if (func_144130(1) != 0) {
        func_0E1F10(0, func_1439E8(0xA57), 0, 0);
        func_0E1F48(5);
    } else if (func_1441B0() != 0) {
        if (D_00249A70 != 0) {
            func_144250();
            func_1444F0();
            func_146C18(o, 0x15);
        } else {
            func_0E2410(2, 0xA58, 0x21A);
            func_144250();
            func_1444F0();
            func_144548(1);
            func_146C48((char *)o);
        }
    } else {
        func_144548(1);
        func_146C18(o, 0x1D);
    }
}
