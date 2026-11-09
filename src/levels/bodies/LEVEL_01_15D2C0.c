/* LEVEL_01:0x15D2C0 -- tests whether the current point lies within range of an object once its lookups pass. */
typedef struct { float x, y, z; } V3;
typedef struct {
    char pad0[0x2C];
    int key;
    char pad30[0x48 - 0x30];
    int alt;
} Info;
typedef struct {
    char pad0[0x30];
    V3 pos;
    char pad3C[0x54 - 0x3C];
    Info *info;
} Obj;
extern void func_15D3D0(char *buf);
extern int func_084708(int key, char *buf);
extern void func_01A2A0(V3 *out);

static inline void Sub(V3 *r, V3 *a, V3 *b)
{
    r->x = a->x - b->x;
    r->y = a->y - b->y;
    r->z = a->z - b->z;
}

int func_15D2C0(Obj *o)
{
    char buf[16];
    V3 cur;
    V3 d;
    Info *info = o->info;

    if (!info->key)
        return 0;
    func_15D3D0(buf);
    if (!func_084708(info->key, buf))
        return 0;
    if (info->alt && func_084708(info->alt, buf))
        return 0;
    func_01A2A0(&cur);
    Sub(&d, &cur, &o->pos);
    if (d.x * d.x + d.y * d.y + d.z * d.z <= 625.0f)
        return 1;
    return 0;
}
