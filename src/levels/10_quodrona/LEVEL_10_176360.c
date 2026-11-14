/* LEVEL_10:0x176360 -- randomises the self float (2..6), starts the helper on the object and copies a fixed 28-byte block into it. */
typedef struct Block {
    int w[7];
} Block;

typedef struct Self {
    char pad_00[4];
    float rnd;
} Self;

typedef struct Obj {
    char pad_00[0xA4];
    Block block;
} Obj;

extern int rand(void);
extern Block D_0022A4C8;
extern void func_1730A0(Obj *o, int a, float f, float g);

void func_176360(Self *self, Obj *o)
{
    self->rnd = (float)rand() * 4.656612873077393e-10f * 4.0f + 2.0f;
    func_1730A0(o, 4, 0.0f, 0.15000000596046448f);
    o->block = D_0022A4C8;
}
