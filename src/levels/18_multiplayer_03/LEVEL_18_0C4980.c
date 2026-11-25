/* LEVEL_18:0x0C4980 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_001B5918;
extern char D_001CAD00[];
extern char D_0027B408[];
extern int func_096410(void *buf, int a, void *b, void *c, void *d);
extern void func_096370(unsigned int a);
extern int func_0A8430(void *p);
extern unsigned int func_078F38(int pad);
extern int func_0A40A8(int a);
extern int func_0AAF80(void);
extern void func_0181E0(int a, int b);
extern int func_018260(int a, int b);
extern int func_0A76D0(void *p, int pad);

void func_0C4980(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_001B5918;
    if (pad != 0) {
        func_096410(buf, pad, D_001CAD00, D_001CAD00, D_001CAD00);
        D_001B5918 = 0;
    }
    func_096370(0xFFFFFFFF);
    obj = (Obj *)func_0A8430(D_0027B408);
    pad = func_078F38(1);
    if (pad & 8) {
        func_0A40A8(0);
        func_0181E0(4, 0);
    } else if (pad & 0x1000) {
        func_0A40A8(0);
        func_0A40A8(7);
        if (func_0AAF80() == 0) {
            func_0181E0(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0A40A8(1);
            func_018260(obj->handle, 1);
        }
    } else {
        func_0A76D0(D_0027B408, pad);
    }
}
