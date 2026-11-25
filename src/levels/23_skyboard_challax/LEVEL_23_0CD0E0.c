/* LEVEL_23:0x0CD0E0 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_001D99E8;
extern char D_001E7A40[];
extern char D_002FE448[];
extern int func_09FAB0(void *buf, int a, void *b, void *c, void *d);
extern void func_09FA10(unsigned int a);
extern int func_0B11A0(void *p);
extern unsigned int func_07DEE0(int pad);
extern int func_0ACDE8(int a);
extern int func_0B38C0(void);
extern void func_019338(int a, int b);
extern int func_0193B8(int a, int b);
extern int func_0B0440(void *p, int pad);

void func_0CD0E0(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_001D99E8;
    if (pad != 0) {
        func_09FAB0(buf, pad, D_001E7A40, D_001E7A40, D_001E7A40);
        D_001D99E8 = 0;
    }
    func_09FA10(0xFFFFFFFF);
    obj = (Obj *)func_0B11A0(D_002FE448);
    pad = func_07DEE0(1);
    if (pad & 8) {
        func_0ACDE8(0);
        func_019338(4, 0);
    } else if (pad & 0x1000) {
        func_0ACDE8(0);
        func_0ACDE8(7);
        if (func_0B38C0() == 0) {
            func_019338(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0ACDE8(1);
            func_0193B8(obj->handle, 1);
        }
    } else {
        func_0B0440(D_002FE448, pad);
    }
}
