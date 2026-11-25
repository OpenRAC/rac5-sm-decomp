/* LEVEL_02:0x0DCC40 -- placement copy of LEVEL_01_0D62B0.c: dispatches the pad buttons of the current screen. */
typedef struct Obj Obj;
struct Obj {
    char pad[0xD0];
    int handle;
};

extern int D_0021B5A8;
extern char D_00229840[];
extern char D_00344508[];
extern int func_0AF650(void *buf, int a, void *b, void *c, void *d);
extern void func_0AF5B0(unsigned int a);
extern int func_0C0D18(void *p);
extern unsigned int func_08E950(int pad);
extern int func_0BC930(int a);
extern int func_0C3430(void);
extern void func_01B188(int a, int b);
extern int func_01B208(int a, int b);
extern int func_0BFFB8(void *p, int pad);

void func_0DCC40(void)
{
    char buf[0x100];
    Obj *obj;
    int pad;

    pad = D_0021B5A8;
    if (pad != 0) {
        func_0AF650(buf, pad, D_00229840, D_00229840, D_00229840);
        D_0021B5A8 = 0;
    }
    func_0AF5B0(0xFFFFFFFF);
    obj = (Obj *)func_0C0D18(D_00344508);
    pad = func_08E950(1);
    if (pad & 8) {
        func_0BC930(0);
        func_01B188(4, 0);
    } else if (pad & 0x1000) {
        func_0BC930(0);
        func_0BC930(7);
        if (func_0C3430() == 0) {
            func_01B188(4, 0);
        }
    } else if (pad & 0x4000) {
        if (obj != 0) {
            func_0BC930(1);
            func_01B208(obj->handle, 1);
        }
    } else {
        func_0BFFB8(D_00344508, pad);
    }
}
