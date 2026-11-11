/* LEVEL_04:0x1A8B58 -- counts the inner timer down by one frame and fires the
   expiry callback on the owning record the moment it reaches zero. */
typedef struct {
    char pad0[0x18];
    float f18;
} Inner;

typedef struct Obj Obj;

typedef struct {
    char pad0[0x54];
    Inner *p54;
    Obj **p58;
} Outer;

extern void func_1A8F20(Outer *, Obj *);

void func_1A8B58(Outer *a0)
{
    Inner *p = a0->p54;
    Obj *q = *a0->p58;

    p->f18 = p->f18 - 1.0f;
    if (p->f18 <= 0.0f) {
        func_1A8F20(a0, q);
    }
}
