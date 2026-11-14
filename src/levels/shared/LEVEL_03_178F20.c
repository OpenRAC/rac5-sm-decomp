/* LEVEL_03:0x178F20 -- copies a three-float vector from the third record into two destination vectors; returns 1. */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    char pad00[0x30];
    V3 v;
} Rec;

int func_178F20(V3 *a0, V3 *a1, Rec *a2)
{
    V3 *p = &a2->v;

    a0->x = p->x;
    a0->y = p->y;
    a0->z = p->z;
    a1->x = a0->x;
    a1->y = a0->y;
    a1->z = a0->z;
    return 1;
}
