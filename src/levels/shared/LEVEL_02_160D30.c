/* LEVEL_02:0x160D30 -- copies a three-float vector into the vector held
   at +0x18 of the object pointed to by the pointer stored at +0x58. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad_00[0x18];
    V3 v;
} Dst;

typedef struct {
    char pad_00[0x58];
    Dst *dst;
} Rec;

void func_160D30(Rec *a0, V3 *a1)
{
    V3 *v = &a0->dst->v;

    a0->dst->v.x = a1->x;
    v->y = a1->y;
    v->z = a1->z;
}
