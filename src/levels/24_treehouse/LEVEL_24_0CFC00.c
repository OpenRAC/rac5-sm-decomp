/* LEVEL_24:0x0CFC00 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_001D7268;
extern char D_001E5640[];
extern char D_002F8EC8[];
extern int func_0A25B8(void *buf, int a, void *b, void *c, void *d);
extern void func_0A2518(unsigned int a);
extern int func_0B3C98(void *p);
extern unsigned int func_0812C0(int pad);
extern int func_0AF8B0(int a);
extern int func_0B63E8(void);
extern void func_018E18(int a, int b);
extern int func_018E98(int a, int b);
extern int func_0B2F38(void *p, int pad);

void func_0CFC00(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_001D7268;
    if (pad != 0) {
        func_0A25B8(buf, pad, D_001E5640, D_001E5640, D_001E5640);
        D_001D7268 = 0;
    }
    func_0A2518(0xFFFFFFFF);
    obj = (Obj *)func_0B3C98(D_002F8EC8);
    pad = func_0812C0(1);
    if (pad & 8) {
        func_0AF8B0(0);
        func_018E18(4, 0);
    } else if (pad & 0x1000) {
        func_0AF8B0(0);
        func_0AF8B0(7);
        if (func_0B63E8() == 0) {
            func_018E18(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0AF8B0(1);
            func_018E98(obj->handle, 1);
        }
    } else {
        func_0B2F38(D_002F8EC8, pad);
    }
}
