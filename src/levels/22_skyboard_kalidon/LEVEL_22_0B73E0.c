/* LEVEL_22:0x0B73E0 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_0015FF30;

extern int func_10A0C8(int arg);
extern int func_109980(int id);
extern void func_0C5490(int a, int b, int c, int d);
extern void func_0C54C8(int a);
extern int func_10A148(void);
extern int func_10A1E8(void);
extern void func_10A488(void);
extern void func_10CBB0(int *p, int a1);
extern int func_0C5980(int key, int state, int arg);
extern void func_10A4E0(int value);
extern void func_10CBE0(char *record);

void func_0B73E0(int *o)
{
    if (func_10A0C8(1) != 0) {
        func_0C5490(0, func_109980(0xA57), 0, 0);
        func_0C54C8(5);
    } else if (func_10A148() != 0) {
        if (D_0015FF30 != 0) {
            func_10A1E8();
            func_10A488();
            func_10CBB0(o, 0x15);
        } else {
            func_0C5980(2, 0xA58, 0x21A);
            func_10A1E8();
            func_10A488();
            func_10A4E0(1);
            func_10CBE0((char *)o);
        }
    } else {
        func_10A4E0(1);
        func_10CBB0(o, 0x1D);
    }
}
