/* LEVEL_17:0x0B70E0 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_001A2228;

extern int func_10EFF0(int arg);
extern int func_10E8A8(int id);
extern void func_0C5B88(int a, int b, int c, int d);
extern void func_0C5BC0(int a);
extern int func_10F070(void);
extern int func_10F110(void);
extern void func_10F2E8(void);
extern void func_111328(int *p, int a1);
extern int func_0C6078(int key, int state, int arg);
extern void func_10F310(int value);
extern void func_111358(char *record);

void func_0B70E0(int *o)
{
    if (func_10EFF0(1) != 0) {
        func_0C5B88(0, func_10E8A8(0xA57), 0, 0);
        func_0C5BC0(5);
    } else if (func_10F070() != 0) {
        if (D_001A2228 != 0) {
            func_10F110();
            func_10F2E8();
            func_111328(o, 0x15);
        } else {
            func_0C6078(2, 0xA58, 0x21A);
            func_10F110();
            func_10F2E8();
            func_10F310(1);
            func_111358((char *)o);
        }
    } else {
        func_10F310(1);
        func_111328(o, 0x1D);
    }
}
