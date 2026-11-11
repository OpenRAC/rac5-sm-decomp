/* LEVEL_03:0x157C60 -- tests whether a point is within range of an indexed position. */
struct V4 {
    float x, y, z, w;
};
struct Tbl {
    int pad0;
    struct V4 *pos;
};
struct Hold {
    struct Tbl *tbl;
};
struct Obj {
    char pad[0x45];
    unsigned char kind;
    char pad2[0x0E];
    struct Hold *hold;
};
extern void func_01A0B0(struct V4 *v);

int func_157C60(struct Obj *o, int idx)
{
    struct Hold *h = o->hold;
    struct V4 v;
    struct V4 *p;

    if (h->tbl == 0)
        return 0;
    func_01A0B0(&v);
    p = (struct V4 *)((idx << 4) + (int)h->tbl->pos);
    v.x = v.x - p->x;
    v.y = v.y - p->y;
    v.z = v.z - p->z;
    if (v.x * v.x + v.y * v.y + v.z * v.z <= 25.0f)
        return 1;
    return o->kind == 3;
}
