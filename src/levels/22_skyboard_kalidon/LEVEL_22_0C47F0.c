/* LEVEL_22:0x0C47F0 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_00165968;
extern char D_00171D40[];
extern char D_00282BC8[];
extern int func_097350(void *buf, int a, void *b, void *c, void *d);
extern void func_0972B0(unsigned int a);
extern int func_0A88B0(void *p);
extern unsigned int func_079438(int pad);
extern int func_0A4570(int a);
extern int func_0AAFD0(void);
extern void func_016E40(int a, int b);
extern int func_016EC0(int a, int b);
extern int func_0A7B50(void *p, int pad);

void func_0C47F0(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_00165968;
    if (pad != 0) {
        func_097350(buf, pad, D_00171D40, D_00171D40, D_00171D40);
        D_00165968 = 0;
    }
    func_0972B0(0xFFFFFFFF);
    obj = (Obj *)func_0A88B0(D_00282BC8);
    pad = func_079438(1);
    if (pad & 8) {
        func_0A4570(0);
        func_016E40(4, 0);
    } else if (pad & 0x1000) {
        func_0A4570(0);
        func_0A4570(7);
        if (func_0AAFD0() == 0) {
            func_016E40(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0A4570(1);
            func_016EC0(obj->handle, 1);
        }
    } else {
        func_0A7B50(D_00282BC8, pad);
    }
}
