/* LEVEL_23:0x0BFCD0 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_001D3FB0;

extern int func_124370(int arg);
extern int func_123C28(int id);
extern void func_0CDD80(int a, int b, int c, int d);
extern void func_0CDDB8(int a);
extern int func_1243F0(void);
extern int func_124490(void);
extern void func_124730(void);
extern void func_126E58(int *p, int a1);
extern int func_0CE270(int key, int state, int arg);
extern void func_124788(int value);
extern void func_126E88(char *record);

void func_0BFCD0(int *o)
{
    if (func_124370(1) != 0) {
        func_0CDD80(0, func_123C28(0xA57), 0, 0);
        func_0CDDB8(5);
    } else if (func_1243F0() != 0) {
        if (D_001D3FB0 != 0) {
            func_124490();
            func_124730();
            func_126E58(o, 0x15);
        } else {
            func_0CE270(2, 0xA58, 0x21A);
            func_124490();
            func_124730();
            func_124788(1);
            func_126E88((char *)o);
        }
    } else {
        func_124788(1);
        func_126E58(o, 0x1D);
    }
}
