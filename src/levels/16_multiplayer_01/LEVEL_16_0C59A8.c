/* LEVEL_16:0x0C59A8 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_001B4498;
extern char D_001C9780[];
extern char D_0027B088[];
extern int func_097400(void *buf, int a, void *b, void *c, void *d);
extern void func_097360(unsigned int a);
extern int func_0A9458(void *p);
extern unsigned int func_0795B8(int pad);
extern int func_0A50B0(int a);
extern int func_0ABFA8(void);
extern void func_018B98(int a, int b);
extern int func_018C18(int a, int b);
extern int func_0A86F8(void *p, int pad);

void func_0C59A8(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_001B4498;
    if (pad != 0) {
        func_097400(buf, pad, D_001C9780, D_001C9780, D_001C9780);
        D_001B4498 = 0;
    }
    func_097360(0xFFFFFFFF);
    obj = (Obj *)func_0A9458(D_0027B088);
    pad = func_0795B8(1);
    if (pad & 8) {
        func_0A50B0(0);
        func_018B98(4, 0);
    } else if (pad & 0x1000) {
        func_0A50B0(0);
        func_0A50B0(7);
        if (func_0ABFA8() == 0) {
            func_018B98(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0A50B0(1);
            func_018C18(obj->handle, 1);
        }
    } else {
        func_0A86F8(D_0027B088, pad);
    }
}
