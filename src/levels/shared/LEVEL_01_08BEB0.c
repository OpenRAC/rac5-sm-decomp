/* LEVEL_01:0x08BEB0 -- links an inner record to an outer one, clears one
   flag bit and writes two floats into the inner record. */
typedef struct {
    unsigned char pad0[8];
    float g0;
    float g1;
    unsigned char pad1[4];
    int h1;
    unsigned char pad2[8];
    unsigned int flags;
    unsigned char b24;
} Inner;

typedef struct {
    unsigned char pad0[3];
    unsigned char b3;
    unsigned char b4;
    char b5;
    unsigned char pad1[2];    Inner *p;
} Outer;

void func_08BEB0(Outer *self, Inner *other, float v0, float v1)
{
    other->flags &= ~4;
    self->p = other;
    other->h1 = 2;
    self->p->g0 = v0;
    self->p->g1 = v1;
    self->b5 = -1;
    self->b3 = 0;
}
