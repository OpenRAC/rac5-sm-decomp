/* FRONTEND:0x018FA0 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_00030438;

extern int func_0205B8(int arg);
extern int func_01F778(int id);
extern void func_0140E0(int a, int b, int c, int d);
extern void func_014118(int a);
extern int func_020638(void);
extern int func_0206D8(void);
extern void func_020988(void);
extern void func_0229A0(int *p, int a1);
extern int func_015308(int key, int state, int arg);
extern void func_0209E0(int value);
extern void func_0229D0(char *record);

void func_018FA0(int *o)
{
    if (func_0205B8(1) != 0) {
        func_0140E0(0, func_01F778(0xA57), 0, 0);
        func_014118(5);
    } else if (func_020638() != 0) {
        if (D_00030438 != 0) {
            func_0206D8();
            func_020988();
            func_0229A0(o, 0x15);
        } else {
            func_015308(2, 0xA58, 0x21A);
            func_0206D8();
            func_020988();
            func_0209E0(1);
            func_0229D0((char *)o);
        }
    } else {
        func_0209E0(1);
        func_0229A0(o, 0x1D);
    }
}
