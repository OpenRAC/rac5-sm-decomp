/* LEVEL_15:0x12B788 -- appends a 24-byte record (pointer, 12-byte copy, zero word, float) to a fixed table unless it is full. */

struct Blob12 {
    unsigned char b[8];
    int w;
};

struct Rec24 {
    float *p0;
    struct Blob12 blob;
    int w10;
    float f14;
};

struct Table {
    unsigned char pad0[0x6C4];
    struct Rec24 recs[64];
    int count;
};

extern struct Table D_002F2FE0;

void func_12B788(float *a0, struct Blob12 *src)
{
    struct Table *t;
    struct Rec24 *rec;
    struct Rec24 *r;
    float *p;
    int n;

    p = a0;
    t = &D_002F2FE0;
    n = t->count;
    if (n == 64) {
        return;
    }
    rec = t->recs;
    r = &rec[n];
    r->p0 = p;
    r->blob = *src;
    r->w10 = 0;
    r->f14 = *p;
    t->count = n + 1;
}
