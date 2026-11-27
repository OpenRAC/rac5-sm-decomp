/* LEVEL_01:0x06DED8 -- initializes a record header from a source block, then sets flag bytes and float fields. */
extern void func_0974A8(void *, int, int);
typedef struct Src { unsigned char kind; char pad[0xF]; int id; } Src;
typedef struct Rec {
    char pad_00[0x14];
    int f14;
    int f18;
    int f1C;
    Src *src;
    union { int i; float f; } f24;
    float f28;
    float f2C;
    unsigned char b30, b31, b32;
    signed char b33;
    unsigned char b34, b35, b36, b37, b38;
} Rec;

void func_06DED8(Rec *r, Src *s, int v2, int v3, int v4)
{
    unsigned char k;

    func_0974A8(r, s->id, 0);
    r->f14 = v2;
    r->f18 = v3;
    r->f1C = v4;
    r->f24.i = 0;
    r->src = s;
    r->b33 = -1;
    r->b30 = 0;
    r->b31 = 1;
    r->b34 = 1;
    r->b32 = 0;
    r->b35 = 0;
    k = s->kind;
    r->b38 = k;
    r->b37 = 0;
    r->b36 = 0;
    r->f2C = r->f24.f;
    r->f28 = r->f24.f;
}
