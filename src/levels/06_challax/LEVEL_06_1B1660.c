/* LEVEL_06:0x1B1660 -- tests whether a point is near an object's position and otherwise runs a collision query. */
typedef struct {
    float x, y, z;
} V3;
typedef struct {
    float limit;
    char pad4[0x10];
    char *link;
} Info;
typedef struct {
    char pad0[0x30];
    V3 pos;
    char pad3C[0x54 - 0x3C];
    Info *info;
    char pad58[0x70 - 0x58];
    float t;
} Obj;
extern void func_018B30(V3 *out);
extern void func_16E288(char *object, int mask, int bits);
extern int func_01DFD0(V3 *a, float *out, V3 *b, int c, int d, float e);

static inline void Sub(V3 *r, V3 *a, V3 *b)
{
    r->x = a->x - b->x;
    r->y = a->y - b->y;
    r->z = a->z - b->z;
}

int func_1B1660(Obj *o)
{
    Info *info = o->info;
    V3 cur;
    V3 d;
    float tmp[4];

    if (info->limit <= o->t)
        return 1;
    func_018B30(&cur);
    cur.y += 0.75f;
    Sub(&d, &cur, &o->pos);
    if (d.x * d.x + d.y * d.y + d.z * d.z < 0.4f)
        return 1;
    func_16E288(info->link, -1, 8);
    if (func_01DFD0(&o->pos, tmp, &o->pos, 0x28, 0, 0.2f))
        return 1;
    func_16E288(info->link, -9, 0);
    return 0;
}
