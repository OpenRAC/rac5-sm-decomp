/* LEVEL_08:0x0E1268 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_0024F4A8;
extern char D_0025E540[];
extern char D_0037C288[];
extern int func_0B3678(void *buf, int a, void *b, void *c, void *d);
extern void func_0B35D8(unsigned int a);
extern int func_0C52F8(void *p);
extern unsigned int func_090070(int pad);
extern int func_0C0F10(int a);
extern int func_0C7A48(void);
extern void func_01B1A0(int a, int b);
extern int func_01B220(int a, int b);
extern int func_0C4598(void *p, int pad);

void func_0E1268(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_0024F4A8;
    if (pad != 0) {
        func_0B3678(buf, pad, D_0025E540, D_0025E540, D_0025E540);
        D_0024F4A8 = 0;
    }
    func_0B35D8(0xFFFFFFFF);
    obj = (Obj *)func_0C52F8(D_0037C288);
    pad = func_090070(1);
    if (pad & 8) {
        func_0C0F10(0);
        func_01B1A0(4, 0);
    } else if (pad & 0x1000) {
        func_0C0F10(0);
        func_0C0F10(7);
        if (func_0C7A48() == 0) {
            func_01B1A0(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0C0F10(1);
            func_01B220(obj->handle, 1);
        }
    } else {
        func_0C4598(D_0037C288, pad);
    }
}
