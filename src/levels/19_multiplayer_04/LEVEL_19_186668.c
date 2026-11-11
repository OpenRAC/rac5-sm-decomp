/* LEVEL_19:0x186668 -- placement copy of LEVEL_01_1D41F8.c: fills batches of 60-byte records from two vectors and a source block. */
typedef struct Vec3 { float x, y, z; } Vec3;

typedef struct Src {
    float f0, f4, f8, fC, f10, f14, f18;
} Src;

typedef struct Rec {
    Vec3 a;
    Vec3 b;
    float f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    int w2C;
    float f30;
    int w34;
    float f38;
} Rec;

extern Rec *func_088678(int *, void *, int);

void func_186668(void *obj, Src *s, Vec3 *a, Vec3 *b, int tag, int total)
{
    int cnt;
    Rec *p;
    Rec *end;
    Rec *q;
    Vec3 *bp;

    while (total > 0) {
        p = func_088678(&cnt, obj, total);
        if (cnt == 0)
            break;
        end = p + cnt;
        for (q = p; q != end; q++) {
            q->a.x = a->x;
            q->a.y = a->y;
            q->a.z = a->z;
            bp = &q->b;
            bp->x = b->x;
            bp->y = b->y;
            bp->z = b->z;
            q->f20 = s->f8;
            q->f24 = s->fC;
            q->f28 = s->f10;
            q->f30 = s->f14;
            q->f38 = s->f18;
            q->f18 = s->f0;
            q->f1C = s->f4;
            q->w2C = tag;
            q->w34 = 0;
        }
        total -= cnt;
    }
}
