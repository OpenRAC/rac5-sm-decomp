/* LEVEL_02:0x19F468 -- advances a timer on an object and its owner, wraps state when it passes a limit. */
typedef struct {
    int w0;
    int w4;
    char pad8[0x14];
    unsigned char b1C;
} Owner;
typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x0E];
    Owner *p54;
    char pad58[0x18];
    float f70;
} Obj;
typedef struct {
    char pad0[0x70];
    float f70;
} Inner;
extern void func_19F808(Obj *o, int a);
extern void func_19F998(Obj *o);
extern int func_19F610(Obj *o, int a);

void func_19F468(Obj *o)
{
    Owner *s = o->p54;
    if (o->f70++ > 20.00010108947754f) {
        *(int *)&o->f70 = 0;
        o->b45 = 3;
        ((Inner *)s->w0)->f70 += 1.0f;
    }
    func_19F808(o, 1);
    func_19F998(o);
    if (s->b1C == 0) {
        if (func_19F610(o, s->w4) == 0) {
            o->b45 = 2;
            o->f70 = 20.00010108947754f - o->f70;
            s->w4 = 0;
        }
    }
}
