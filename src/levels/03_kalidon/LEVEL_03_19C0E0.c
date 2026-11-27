/* LEVEL_03:0x19C0E0 -- relocates the record's offset field, then stores the length of its vector and a state byte; reports whether the field was set. */
extern float sqrtf(float x);
extern int D_0021F414;

struct Vec3_19C0E0 {
    float x;
    float y;
    float z;
};

struct Rec_19C0E0 {
    int off;
    char pad_04[4];
    float len;
};

struct Obj_19C0E0 {
    char pad_00[0x54];
    struct Rec_19C0E0 *rec;
    char pad_58[0x1E];
    unsigned char state;
};

int func_19C0E0(struct Obj_19C0E0 *o)
{
    struct Rec_19C0E0 *r = o->rec;
    int off = r->off;
    int ok;
    struct Vec3_19C0E0 *v;

    if (off == 0) {
        ok = 0;
    } else {
        r->off = D_0021F414 + off;
        ok = 1;
    }
    if (ok == 0) {
        return 0;
    }
    v = (struct Vec3_19C0E0 *)(r->off + 0x24);
    r->len = sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    o->state = 0x2D;
    return 1;
}
