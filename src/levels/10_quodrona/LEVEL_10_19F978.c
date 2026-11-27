/* LEVEL_10:0x19F978 -- per-kind pre-step of an object (kinds 0 and 1 may finish at once), then queues its transform record: position, basis vector, unit scale and a cleared word. */
typedef struct { float f00, f04, f08, f0C, f10, f14, f18; int f1C; } S;
typedef struct Rec { char pad00[0x40]; char f40[1]; } Rec;
typedef struct Obj { float f00, f04, f08; char pad0C[0x24]; float pos[3]; char pad3C[9]; unsigned char kind; char pad46[0x12]; Rec *f58; } Obj;
extern int func_1A0930(Obj *o);
extern int func_1A0B00(Obj *o);
extern void func_0ECB38(void *a0, S *a1, int a2);
static __inline__ void Copy3(float *d, float *s) { d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; }

void func_19F978(Obj *o)
{
    S s;
    Rec *r;

    switch (o->kind) {
    case 0:
        if (func_1A0930(o) != 0)
            return;
        break;
    case 1:
        if (func_1A0B00(o) != 0)
            return;
        break;
    }
    r = o->f58;
    Copy3(&s.f00, o->pos);
    Copy3(&s.f0C, &o->f00);
    s.f18 = 1.0f;
    s.f1C = 0;
    func_0ECB38(r->f40, &s, 0);
}
