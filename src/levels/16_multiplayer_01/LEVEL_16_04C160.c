/* LEVEL_16:0x04C160 -- when the source rate is nonzero, copies its four-float block into the record and forces the rate to 1; stores the rate and 0.08 times it, loads three globals and calls the update helper. */
struct V4 {
    float x;
    float y;
    float z;
    float w;
};

struct Src {
    struct V4 v;
    float f10;
};

extern float D_001A22F4;
extern float D_001A22F8;
extern float D_001A22FC;
extern void func_044178(char *a);

static __inline__ void CopyV4(struct V4 *d, struct V4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

void func_04C160(char *a0)
{
    struct Src *src;
    struct V4 tmp;
    float x;

    src = (struct Src *)(a0 + 0xC0);
    if (src != 0) {
        x = src->f10;
        tmp = src->v;
        if (x != 0.0f) {
            CopyV4((struct V4 *)(a0 + 0x210), &tmp);
            x = 1.0f;
        }
        *(float *)(a0 + 0x240) = x * 0.08f;
        *(float *)(a0 + 0x26C) = x;
    }
    *(float *)(a0 + 0x230) = D_001A22F4;
    *(float *)(a0 + 0x234) = D_001A22F8;
    *(float *)(a0 + 0x238) = D_001A22FC;
    func_044178(a0);
}
