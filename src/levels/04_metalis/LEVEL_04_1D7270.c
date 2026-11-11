/* LEVEL_04:0x1D7270 -- pushes apart overlapping pairs of circles in the xz plane. */
typedef struct { float x, y, z; } V3;
typedef struct { char pad0[0x30]; V3 pos; } Obj;
typedef struct { Obj *o; int v; } Item;
typedef struct { char pad0[0x44]; unsigned char n; } Hdr;
typedef struct { float x, z; } V2;
typedef struct { char pad0[0x14]; float r; } Rec;
typedef struct { char pad0[0x58]; Hdr *h; } T;
extern float sqrtf(float x);
extern void func_1D7078(Item *a, Rec *ra, Item *b, Rec *rb, V2 *dir, float depth);

void func_1D7270(T *t, Rec *recs)
{
    Hdr *h;
    Item *items;
    unsigned int i;
    unsigned int j;
    Obj *a;
    Item *it;
    Obj *b;
    V3 *p;
    Rec *ra;
    Rec *rb;
    V2 d;
    float dx, dz, r, len;

    h = t->h;
    items = (Item *)h;
    for (i = 0; i < h->n; i = i + 1) {
        it = items + i;
        a = it->o;
        for (j = i + 1; j < h->n; j++) {
            p = &a->pos;
            b = items[j].o;
            ra = recs + i;
            rb = recs + j;
            dx = b->pos.x - a->pos.x;
            r = ra->r + rb->r;
            d.x = dx;
            dz = b->pos.z - p->z;
            d.z = dz;
            if (!(r * r <= dx * dx + dz * dz)) {
                len = sqrtf(dx * dx + dz * dz);
                d.x = d.x * (1.0f / len);
                d.z = d.z * (1.0f / len);
                func_1D7078(&items[i], ra, &items[j], rb, &d, r - len);
            }
        }
    }
}
