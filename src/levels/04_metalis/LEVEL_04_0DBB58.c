/* LEVEL_04:0x0DBB58 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_0021FAA8;
extern char D_0022E240[];
extern char D_00347808[];
extern int func_0ADF90(void *buf, int a, void *b, void *c, void *d);
extern void func_0ADEF0(unsigned int a);
extern int func_0BFBE8(void *p);
extern unsigned int func_08B2B8(int pad);
extern int func_0BB828(int a);
extern int func_0C2338(void);
extern void func_01A4A8(int a, int b);
extern int func_01A528(int a, int b);
extern int func_0BEE88(void *p, int pad);

void func_0DBB58(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_0021FAA8;
    if (pad != 0) {
        func_0ADF90(buf, pad, D_0022E240, D_0022E240, D_0022E240);
        D_0021FAA8 = 0;
    }
    func_0ADEF0(0xFFFFFFFF);
    obj = (Obj *)func_0BFBE8(D_00347808);
    pad = func_08B2B8(1);
    if (pad & 8) {
        func_0BB828(0);
        func_01A4A8(4, 0);
    } else if (pad & 0x1000) {
        func_0BB828(0);
        func_0BB828(7);
        if (func_0C2338() == 0) {
            func_01A4A8(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0BB828(1);
            func_01A528(obj->handle, 1);
        }
    } else {
        func_0BEE88(D_00347808, pad);
    }
}
