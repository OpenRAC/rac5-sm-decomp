/* LEVEL_16:0x136348 -- placement copy of LEVEL_01_155D88.c: when func_074C20 succeeds, moves both points by the object's position and lowers the first by 0.5; returns whether it did. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
} Obj;

extern int func_074C20(void);

int func_136348(Vec3 *a, Vec3 *b, Obj *o)
{
    Vec3 *p;

    if (func_074C20() == 0)
        return 0;
    p = &o->pos;
    a->x = a->x + p->x;
    a->y = a->y + p->y;
    a->z = a->z + p->z;
    b->x = b->x + p->x;
    b->y = b->y + p->y;
    b->z = b->z + p->z;
    a->y = a->y - 0.5f;
    return 1;
}
