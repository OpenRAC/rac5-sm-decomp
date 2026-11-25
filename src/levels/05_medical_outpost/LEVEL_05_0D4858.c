/* LEVEL_05:0x0D4858 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_001F5968;
extern char D_002037C0[];
extern char D_00318EC8[];
extern int func_0A7300(void *buf, int a, void *b, void *c, void *d);
extern void func_0A7260(unsigned int a);
extern int func_0B89B0(void *p);
extern unsigned int func_085978(int pad);
extern int func_0B45C8(int a);
extern int func_0BB0C8(void);
extern void func_019DC0(int a, int b);
extern int func_019E40(int a, int b);
extern int func_0B7C50(void *p, int pad);

void func_0D4858(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_001F5968;
    if (pad != 0) {
        func_0A7300(buf, pad, D_002037C0, D_002037C0, D_002037C0);
        D_001F5968 = 0;
    }
    func_0A7260(0xFFFFFFFF);
    obj = (Obj *)func_0B89B0(D_00318EC8);
    pad = func_085978(1);
    if (pad & 8) {
        func_0B45C8(0);
        func_019DC0(4, 0);
    } else if (pad & 0x1000) {
        func_0B45C8(0);
        func_0B45C8(7);
        if (func_0BB0C8() == 0) {
            func_019DC0(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0B45C8(1);
            func_019E40(obj->handle, 1);
        }
    } else {
        func_0B7C50(D_00318EC8, pad);
    }
}
