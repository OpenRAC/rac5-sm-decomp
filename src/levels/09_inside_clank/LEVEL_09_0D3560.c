/* LEVEL_09:0x0D3560 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_001F03E8;
extern char D_001FE4C0[];
extern char D_00314788[];
extern int func_0A5FF0(void *buf, int a, void *b, void *c, void *d);
extern void func_0A5F50(unsigned int a);
extern int func_0B76B8(void *p);
extern unsigned int func_0849D8(int pad);
extern int func_0B32D0(int a);
extern int func_0B9DD0(void);
extern void func_019C18(int a, int b);
extern int func_019C98(int a, int b);
extern int func_0B6958(void *p, int pad);

void func_0D3560(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_001F03E8;
    if (pad != 0) {
        func_0A5FF0(buf, pad, D_001FE4C0, D_001FE4C0, D_001FE4C0);
        D_001F03E8 = 0;
    }
    func_0A5F50(0xFFFFFFFF);
    obj = (Obj *)func_0B76B8(D_00314788);
    pad = func_0849D8(1);
    if (pad & 8) {
        func_0B32D0(0);
        func_019C18(4, 0);
    } else if (pad & 0x1000) {
        func_0B32D0(0);
        func_0B32D0(7);
        if (func_0B9DD0() == 0) {
            func_019C18(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0B32D0(1);
            func_019C98(obj->handle, 1);
        }
    } else {
        func_0B6958(D_00314788, pad);
    }
}
