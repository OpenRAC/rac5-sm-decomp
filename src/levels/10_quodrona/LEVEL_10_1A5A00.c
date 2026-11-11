/* LEVEL_10:0x1A5A00 -- probes with a sweep call and nudges the object along the probe direction; moves by the probe scale on a clean hit, otherwise by a fixed fraction. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x10];
    int id_10;
    int kind_14;
    char pad_18[8];
} Hit;

typedef struct {
    int w_00;
    char pad_04[0x574];
    Vec3 dir_578;
} Data;

typedef struct {
    char pad_00[0x30];
    Vec3 pos_30;
    char pad_3C[0x1C];
    Data *data_58;
} Obj;

extern int func_021700(float *out, Hit *hit, Vec3 *pos, Vec3 *dir, int a, int b, int c, float f);
extern void func_1A58E8(Obj *o, int n);

static __inline__ void VecAddScaled(Vec3 *p, Vec3 *d, float k)
{
    p->x = p->x + d->x * k;
    p->y = p->y + d->y * k;
    p->z = p->z + d->z * k;
}

void func_1A5A00(Obj *self)
{
    Hit loc;
    float out;
    Data *d;
    unsigned char ok;

    d = self->data_58;
    ok = func_021700(&out, &loc, &self->pos_30, &d->dir_578, 0x28, 0, 0, 0.6666666865348816f);
    if (ok != 0
        && (loc.kind_14 != 2 || loc.id_10 != d->w_00)) {
        VecAddScaled(&self->pos_30, &d->dir_578, out);
        func_1A58E8(self, 2);
    } else {
        VecAddScaled(&self->pos_30, &d->dir_578, 0.6666666865348816f);
    }
}
