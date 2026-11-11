/* LEVEL_23:0x17CCE0 -- placement copy of LEVEL_22_130000.c: counts a timer down, then either finishes or prints the seconds left. */
typedef struct Obj { char pad0[0x45]; unsigned char f45; char pad46[0x70 - 0x46]; float f70; } Obj;
extern char D_00365160[];
extern char D_001F4A20[];
extern float ceilf(float x);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B30D0(int a);
extern void func_17CAE0(Obj *o, int a, int b);
extern void func_05ADA8(float f);
extern int func_09CDA8(int a);
extern void func_0AC270(void *arg0, void *arg1, void *arg2, void *arg3);

void func_17CCE0(Obj *o)
{
    float t;

    func_0B30D0(22);
    t = o->f70 - 1.0f;
    o->f70 = t;
    if (t <= 0.0f) {
        func_17CAE0(o, o->f45, 4);
        return;
    }
    sprintf(D_00365160, D_001F4A20, (int)ceilf(t / 30.0f));
    func_05ADA8(0.0f);
    if (func_09CDA8(0))
        func_0AC270(0, D_00365160, 0, 0);
}
