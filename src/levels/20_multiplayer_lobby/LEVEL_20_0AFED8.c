/* LEVEL_20:0x0AFED8 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_00116B78;
extern char D_0012A800[];
extern char D_0019E8C8[];
extern int func_081AF8(void *buf, int a, void *b, void *c, void *d);
extern void func_081A58(unsigned int a);
extern int func_093988(void *p);
extern unsigned int func_067228(int pad);
extern int func_08F6B0(int a);
extern int func_0964D8(void);
extern void func_016950(int a, int b);
extern int func_0169D0(int a, int b);
extern int func_092C28(void *p, int pad);

void func_0AFED8(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_00116B78;
    if (pad != 0) {
        func_081AF8(buf, pad, D_0012A800, D_0012A800, D_0012A800);
        D_00116B78 = 0;
    }
    func_081A58(0xFFFFFFFF);
    obj = (Obj *)func_093988(D_0019E8C8);
    pad = func_067228(1);
    if (pad & 8) {
        func_08F6B0(0);
        func_016950(4, 0);
    } else if (pad & 0x1000) {
        func_08F6B0(0);
        func_08F6B0(7);
        if (func_0964D8() == 0) {
            func_016950(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_08F6B0(1);
            func_0169D0(obj->handle, 1);
        }
    } else {
        func_092C28(D_0019E8C8, pad);
    }
}
