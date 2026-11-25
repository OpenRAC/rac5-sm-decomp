/* LEVEL_07:0x0D8310 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_0021A8E8;
extern char D_002295C0[];
extern char D_00342908[];
extern int func_0AAD40(void *buf, int a, void *b, void *c, void *d);
extern void func_0AACA0(unsigned int a);
extern int func_0BC468(void *p);
extern unsigned int func_08A0F0(int pad);
extern int func_0B8080(int a);
extern int func_0BEB80(void);
extern void func_01AEE8(int a, int b);
extern int func_01AF68(int a, int b);
extern int func_0BB708(void *p, int pad);

void func_0D8310(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_0021A8E8;
    if (pad != 0) {
        func_0AAD40(buf, pad, D_002295C0, D_002295C0, D_002295C0);
        D_0021A8E8 = 0;
    }
    func_0AACA0(0xFFFFFFFF);
    obj = (Obj *)func_0BC468(D_00342908);
    pad = func_08A0F0(1);
    if (pad & 8) {
        func_0B8080(0);
        func_01AEE8(4, 0);
    } else if (pad & 0x1000) {
        func_0B8080(0);
        func_0B8080(7);
        if (func_0BEB80() == 0) {
            func_01AEE8(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0B8080(1);
            func_01AF68(obj->handle, 1);
        }
    } else {
        func_0BB708(D_00342908, pad);
    }
}
