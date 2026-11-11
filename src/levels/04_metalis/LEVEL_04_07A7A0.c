/* LEVEL_04:0x07A7A0 -- spawns an effect record from a parameter block, a position and a direction. */
typedef struct {
    float x;
    float y;
    float z;
} Vec07A7A0;

typedef struct {
    int w0;
    float f4;
    float f8;
    float fC;
} Params07A7A0;

typedef struct {
    void (*fn)(void);
    char pad4[4];
    int p8;
    Vec07A7A0 pos;
    char pad18_[0];
    float f18;
    unsigned int col;
    Vec07A7A0 tgt;
    float f2C;
    void *owner;
} Fx07A7A0;

extern unsigned short D_002B25F4;
extern Fx07A7A0 *func_096CC0(int a, int b, int c, int d, int e);
extern void func_07AA70(void);

static inline void scale3(Vec07A7A0 *d, Vec07A7A0 *s, float k)
{
    d->x = k * s->x;
    d->y = k * s->y;
    d->z = k * s->z;
}

static inline void copy3(Vec07A7A0 *d, Vec07A7A0 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static inline void add3(Vec07A7A0 *d, Vec07A7A0 *a, Vec07A7A0 *b)
{
    d->x = a->x + b->x;
    d->y = a->y + b->y;
    d->z = a->z + b->z;
}

void func_07A7A0(void *obj, Params07A7A0 *a, Vec07A7A0 *pos, Vec07A7A0 *dir)
{
    Vec07A7A0 tmp;
    Fx07A7A0 *e = func_096CC0(1, 1, D_002B25F4, 0, 0);

    if (e != 0) {
        e->p8 = a->w0;
        e->col = a->w0 & 0xFFFFFF;
        e->fn = func_07AA70;
        e->f18 = a->f4;
        e->f2C = a->f4 + a->f4 * a->fC;
        e->owner = obj;
        scale3(&tmp, dir, a->f8);
        copy3(&e->pos, pos);
        add3(&e->tgt, pos, &tmp);
    }
}
