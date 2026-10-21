/* LEVEL_05:0x131FE0 -- forwards four floats of a global object, then sets
   a flag bit in the sub-object. */
typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Obj;

typedef struct {
    char pad[0x58];
    int flags;
} Sub;

typedef struct {
    char pad[0x58];
    Sub *sub;
} Rec;

extern Obj *D_1F6150;

extern void func_07E070(void *a0, Obj *a1, float f0, int i0, float f1, int i1,
                        float f2, int i2, float f3, int i3, int i4, int i5);

void func_131FE0(Rec *a0)
{
    Obj *p = D_1F6150;
    Sub *s = a0->sub;

    if (p != 0) {
        func_07E070(a0, p, p->f14, 0, p->f18, 0, p->f1C, 0, p->f20, 0, 0, 1);
    }
    s->flags |= 1;
}
