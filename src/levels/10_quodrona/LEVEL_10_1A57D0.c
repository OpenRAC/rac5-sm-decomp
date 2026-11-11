/* LEVEL_10:0x1A57D0 -- stores the normalised direction from an idle object to a target, then notifies. */
typedef struct V3 { float x, y, z; } V3;
typedef struct W { char pad0[0x578]; V3 d; } W;
typedef struct Obj { char pad0[0x30]; V3 pos; char pad3C[9]; unsigned char state; char pad46[0x58 - 0x46]; W *w; } Obj;
extern float sqrtf(float x);
extern void func_1A58E8(Obj *o, int a);

void func_1A57D0(Obj *o, V3 *t)
{
    if (o->state == 0) {
        W *w = o->w;
        V3 *p = &o->pos;
        V3 *d = &w->d;
        float inv;

        d->x = t->x - p->x;
        d->y = t->y - p->y;
        d->z = t->z - p->z;
        if (!(d->x * d->x + d->y * d->y + d->z * d->z < 2.384185791015625e-07f)) {
            inv = 1.0f / sqrtf(d->x * d->x + d->y * d->y + d->z * d->z);
            d->x = d->x * inv;
            d->y = d->y * inv;
            d->z = d->z * inv;
        }
        func_1A58E8(o, 1);
    }
}
