/* LEVEL_01:0x191790 -- copies one of the object's two triples of floats. */
typedef struct { void *p_00; char pad_04[0x21]; unsigned char b_25; } Sub;
typedef struct { char pad_00[4]; int i_04; } Obj;
typedef struct { char pad_00[0x54]; Sub *p_54; } Owner;

void func_191790(Owner *a0, float *a1)
{
    Sub *s = a0->p_54;
    unsigned int slot = s->b_25 != 0;
    Obj *o = (Obj *)s->p_00;
    float *src = (float *)((slot << 4) + o->i_04);

    a1[0] = src[0];
    a1[1] = src[1];
    a1[2] = src[2];
}
