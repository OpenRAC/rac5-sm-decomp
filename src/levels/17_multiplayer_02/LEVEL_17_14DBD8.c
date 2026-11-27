/* LEVEL_17:0x14DBD8 -- copies a position into the output vector from one of the linked records or from the object itself depending on its state. */
typedef struct { float x; float y; float z; } Vec3;
typedef struct { char pad00[0x30]; Vec3 pos; } Body;
typedef struct { Body *a; Body *b; } Links;
typedef struct { char pad00[0x30]; Vec3 pos; char pad3C[9]; unsigned char state; char pad46[0x12]; Links *links; } Obj;
static __inline__ void Copy3(Vec3 *d, Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_14DBD8(Obj *o, Vec3 *out)
{
    Links *l = o->links;

    if (o->state == 1) {
        Copy3(out, &l->a->pos);
    } else if (o->state == 3) {
        Copy3(out, &l->b->pos);
    } else {
        Copy3(out, &o->pos);
    }
}
