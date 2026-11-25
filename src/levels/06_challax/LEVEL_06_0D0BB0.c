/* LEVEL_06:0x0D0BB0 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_001F54E8;
extern char D_00203740[];
extern char D_00319D88[];
extern int func_0A3510(void *buf, int a, void *b, void *c, void *d);
extern void func_0A3470(unsigned int a);
extern int func_0B4D08(void *p);
extern unsigned int func_080E98(int pad);
extern int func_0B0848(int a);
extern int func_0B7420(void);
extern void func_019028(int a, int b);
extern int func_0190A8(int a, int b);
extern int func_0B3FA8(void *p, int pad);

void func_0D0BB0(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_001F54E8;
    if (pad != 0) {
        func_0A3510(buf, pad, D_00203740, D_00203740, D_00203740);
        D_001F54E8 = 0;
    }
    func_0A3470(0xFFFFFFFF);
    obj = (Obj *)func_0B4D08(D_00319D88);
    pad = func_080E98(1);
    if (pad & 8) {
        func_0B0848(0);
        func_019028(4, 0);
    } else if (pad & 0x1000) {
        func_0B0848(0);
        func_0B0848(7);
        if (func_0B7420() == 0) {
            func_019028(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0B0848(1);
            func_0190A8(obj->handle, 1);
        }
    } else {
        func_0B3FA8(D_00319D88, pad);
    }
}
