/* LEVEL_17:0x0C4EE8 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_001A7A98;
extern char D_001BCC00[];
extern char D_0026C388[];
extern int func_0968F8(void *buf, int a, void *b, void *c, void *d);
extern void func_096858(unsigned int a);
extern int func_0A8998(void *p);
extern unsigned int func_07A030(int pad);
extern int func_0A4590(int a);
extern int func_0AB4E8(void);
extern void func_018518(int a, int b);
extern int func_018598(int a, int b);
extern int func_0A7C38(void *p, int pad);

void func_0C4EE8(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_001A7A98;
    if (pad != 0) {
        func_0968F8(buf, pad, D_001BCC00, D_001BCC00, D_001BCC00);
        D_001A7A98 = 0;
    }
    func_096858(0xFFFFFFFF);
    obj = (Obj *)func_0A8998(D_0026C388);
    pad = func_07A030(1);
    if (pad & 8) {
        func_0A4590(0);
        func_018518(4, 0);
    } else if (pad & 0x1000) {
        func_0A4590(0);
        func_0A4590(7);
        if (func_0AB4E8() == 0) {
            func_018518(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0A4590(1);
            func_018598(obj->handle, 1);
        }
    } else {
        func_0A7C38(D_0026C388, pad);
    }
}
