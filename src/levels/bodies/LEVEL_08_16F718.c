/* LEVEL_08:0x16F718 -- after a timing check, applies an effect to a raised anchor point and to up to twelve linked entries. */
struct Vec3 {
    float x, y, z;
};
struct Anchor {
    char pad[0x30];
    struct Vec3 pos;
};
struct Slot {
    struct Anchor *item;
    char pad[0x18];
};
struct Owner {
    char pad[0x58];
    struct Slot *slots;
};
extern struct Anchor D_002843D0;
extern float func_01ACC0(float *out);
extern void func_16F680(struct Vec3 *v, float s);

void func_16F718(struct Owner *o)
{
    float t[4];
    struct Vec3 v;
    unsigned i;
    int off;
    struct Anchor *a;
    struct Vec3 *p;
    struct Anchor *d;

    if (func_01ACC0(t) < 0.016666668f)
        return;
    d = &D_002843D0;
    p = &d->pos;
    v.x = d->pos.x;
    v.y = p->y + 0.75f;
    v.z = p->z;
    func_16F680(&v, 0.75f);
    for (i = 0, off = 0; i < 12; i++, off += 0x1C) {
        a = *(struct Anchor **)((char *)o->slots + off);
        if (a)
            func_16F680(&a->pos, 1.0f);
    }
}
