/* LEVEL_01:0x16CA90 -- checks an entry's position drift and returns a state code. */
typedef struct {
    char pad0[0x30];
    float x;
    char pad34[4];
    float z;
} Src_t;

typedef struct {
    Src_t *src;
    float *pos;
    char pad8[0x10];
    unsigned char flags;
    char pad19[3];
} Ent_t;

typedef struct {
    char pad0[0x58];
    Ent_t *ents;
} Obj_t;

extern float fabsf(float x);
extern void func_16CC28(Obj_t *o, int i, float *p);

int func_16CA90(Obj_t *o, int i)
{
    Ent_t *e = &o->ents[i];

    if (e->flags & 1) {
        Src_t *s = e->src;
        float *p = e->pos;

        func_16CC28(o, i, p);
        if (fabsf(s->x - p[0]) > 0.30000001192092896f || fabsf(s->z - p[1]) > 0.30000001192092896f)
            return 1;
        return (e->flags & 2) == 0 ? 3 : 2;
    }
    return 0;
}
