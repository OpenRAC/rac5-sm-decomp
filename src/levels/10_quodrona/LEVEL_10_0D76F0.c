/* LEVEL_10:0x0D76F0 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_0020F5E8;
extern char D_0021D840[];
extern char D_00336408[];
extern int func_0A9E58(void *buf, int a, void *b, void *c, void *d);
extern void func_0A9DB8(unsigned int a);
extern int func_0BB750(void *p);
extern unsigned int func_088388(int pad);
extern int func_0B71F8(int a);
extern int func_0BDE70(void);
extern void func_019EA8(int a, int b);
extern int func_019F28(int a, int b);
extern int func_0BA9F0(void *p, int pad);

void func_0D76F0(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_0020F5E8;
    if (pad != 0) {
        func_0A9E58(buf, pad, D_0021D840, D_0021D840, D_0021D840);
        D_0020F5E8 = 0;
    }
    func_0A9DB8(0xFFFFFFFF);
    obj = (Obj *)func_0BB750(D_00336408);
    pad = func_088388(1);
    if (pad & 8) {
        func_0B71F8(0);
        func_019EA8(4, 0);
    } else if (pad & 0x1000) {
        func_0B71F8(0);
        func_0B71F8(7);
        if (func_0BDE70() == 0) {
            func_019EA8(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0B71F8(1);
            func_019F28(obj->handle, 1);
        }
    } else {
        func_0BA9F0(D_00336408, pad);
    }
}
