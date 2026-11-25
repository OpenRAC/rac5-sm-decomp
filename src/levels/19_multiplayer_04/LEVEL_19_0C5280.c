/* LEVEL_19:0x0C5280 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_001B5618;
extern char D_001CA980[];
extern char D_0027B208[];
extern int func_096C90(void *buf, int a, void *b, void *c, void *d);
extern void func_096BF0(unsigned int a);
extern int func_0A8D30(void *p);
extern unsigned int func_079AA0(int pad);
extern int func_0A4928(int a);
extern int func_0AB880(void);
extern void func_018898(int a, int b);
extern int func_018918(int a, int b);
extern int func_0A7FD0(void *p, int pad);

void func_0C5280(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_001B5618;
    if (pad != 0) {
        func_096C90(buf, pad, D_001CA980, D_001CA980, D_001CA980);
        D_001B5618 = 0;
    }
    func_096BF0(0xFFFFFFFF);
    obj = (Obj *)func_0A8D30(D_0027B208);
    pad = func_079AA0(1);
    if (pad & 8) {
        func_0A4928(0);
        func_018898(4, 0);
    } else if (pad & 0x1000) {
        func_0A4928(0);
        func_0A4928(7);
        if (func_0AB880() == 0) {
            func_018898(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0A4928(1);
            func_018918(obj->handle, 1);
        }
    } else {
        func_0A7FD0(D_0027B208, pad);
    }
}
