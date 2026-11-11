/* LEVEL_20:067D68 -- creates one object: clears a flag bit of the
   template, links it into the object and hands it to the spawn routine. */
typedef struct {
    unsigned char pad0[8];
    float f8;
    unsigned char pad1[8];
    int i14;
    unsigned char pad2[8];
    unsigned int flags;
    unsigned char b24;
} Inner;

typedef struct {
    unsigned char pad0[4];
    int b4;
    unsigned char pad1[0x0C];
    Inner *p;
    int b18;
} Obj;

extern void func_0686B0(Inner *p, int a, int b);

void func_067D68(Obj *self, Inner *other, float t)
{
    other->flags &= ~4;
    self->p = other;
    other->b24 = 0;
    self->p->i14 = 2;
    self->p->f8 = t;
    self->b4 = 0;
    self->b18 = 0;
    func_0686B0(other, 0, 0);
}
