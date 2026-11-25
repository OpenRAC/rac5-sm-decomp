/* LEVEL_03:0x0D6098 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_0021EC68;
extern char D_0022D7C0[];
extern char D_00347E88[];
extern int func_0A8AC0(void *buf, int a, void *b, void *c, void *d);
extern void func_0A8A20(unsigned int a);
extern int func_0BA1F0(void *p);
extern unsigned int func_087E78(int pad);
extern int func_0B5E08(int a);
extern int func_0BC908(void);
extern void func_01A590(int a, int b);
extern int func_01A610(int a, int b);
extern int func_0B9490(void *p, int pad);

void func_0D6098(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_0021EC68;
    if (pad != 0) {
        func_0A8AC0(buf, pad, D_0022D7C0, D_0022D7C0, D_0022D7C0);
        D_0021EC68 = 0;
    }
    func_0A8A20(0xFFFFFFFF);
    obj = (Obj *)func_0BA1F0(D_00347E88);
    pad = func_087E78(1);
    if (pad & 8) {
        func_0B5E08(0);
        func_01A590(4, 0);
    } else if (pad & 0x1000) {
        func_0B5E08(0);
        func_0B5E08(7);
        if (func_0BC908() == 0) {
            func_01A590(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0B5E08(1);
            func_01A610(obj->handle, 1);
        }
    } else {
        func_0B9490(D_00347E88, pad);
    }
}
