/* LEVEL_10:0x1B21B0 -- copies a three-float vector into the object pointed
   to by a0+0x58, or writes (1,1,1) when the source is null. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

typedef struct {
    char pad00[0x58];
    Vec *ptr;
    char pad5C[0x7FC - 0x5C];
    Vec pos;
} Rec;

void func_1B21B0(Rec *a0, Vec *a1)
{
    Rec *v = a0->ptr;
    Vec *p;

    if (a1 != 0) {
        p = (Vec *)((char *)v + 0x7FC);
        p->x = a1->x;
        p->y = a1->y;
        p->z = a1->z;
    } else {
        v->pos.z = 1.0f;
        v->pos.y = 1.0f;
        v->pos.x = 1.0f;
    }
}
