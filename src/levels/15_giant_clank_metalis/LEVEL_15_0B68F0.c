/* LEVEL_15:0x0B68F0 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_0015B268;
extern char D_00169040[];
extern char D_00244848[];
extern int func_089608(void *buf, int a, void *b, void *c, void *d);
extern void func_089568(unsigned int a);
extern int func_09AA50(void *p);
extern unsigned int func_06C700(int pad);
extern int func_096530(int a);
extern int func_09D168(void);
extern void func_016A10(int a, int b);
extern int func_016A90(int a, int b);
extern int func_099CF0(void *p, int pad);

void func_0B68F0(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_0015B268;
    if (pad != 0) {
        func_089608(buf, pad, D_00169040, D_00169040, D_00169040);
        D_0015B268 = 0;
    }
    func_089568(0xFFFFFFFF);
    obj = (Obj *)func_09AA50(D_00244848);
    pad = func_06C700(1);
    if (pad & 8) {
        func_096530(0);
        func_016A10(4, 0);
    } else if (pad & 0x1000) {
        func_096530(0);
        func_096530(7);
        if (func_09D168() == 0) {
            func_016A10(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_096530(1);
            func_016A90(obj->handle, 1);
        }
    } else {
        func_099CF0(D_00244848, pad);
    }
}
