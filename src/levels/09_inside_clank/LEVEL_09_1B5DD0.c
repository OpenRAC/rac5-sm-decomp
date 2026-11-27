/* LEVEL_09:0x1B5DD0 -- placement copy of LEVEL_07_1DBE20.c: shifts an effect origin by the owner's movement since the last call and updates up to four spawned particles, replacing finished ones. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

struct Obj {
    char pad0[0x30];
    Vec3 f_30;
};

extern int rand(void);

extern void func_06AB88(char *p);
extern void func_06B000(char *record);
extern void func_06AAC8(char *object);
extern char *func_1B6040(struct Obj *o, Vec3 *out, Vec3 *vel, int z);

static __inline__ void Vec3_Copy(Vec3 *dst, Vec3 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

static __inline__ void Vec3_Sub(Vec3 *r, Vec3 *a, Vec3 *b)
{
    r->x = a->x - b->x;
    r->y = a->y - b->y;
    r->z = a->z - b->z;
}

static __inline__ void Vec3_Add(Vec3 *r, Vec3 *a, Vec3 *b)
{
    r->x = a->x + b->x;
    r->y = a->y + b->y;
    r->z = a->z + b->z;
}

static __inline__ int Part_HasState(char *p, int state)
{
    return p[0x30] == state;
}

static __inline__ int Roll(int limit)
{
    return rand() % 100 <= limit;
}

void func_1B5DD0(struct Obj *o, Vec3 *ref, Vec3 *out, Vec3 *vel, char **slots, int spawn)
{
    Vec3 d;
    unsigned int i;
    char *p;

    Vec3_Copy(out, &o->f_30);
    Vec3_Sub(&d, &o->f_30, ref);
    Vec3_Add(out, out, &d);
    for (i = 0; i < 4; i++) {
        p = slots[i];
        if (p != 0) {
            Vec3_Add(&vel[i], &vel[i], &d);
            func_06AB88(p);
            if (Part_HasState(p, 3)) {
                func_06B000(p);
                func_06AAC8(p);
                slots[i] = 0;
            }
        } else if (spawn != 0 && Roll(1)) {
            slots[i] = func_1B6040(o, out, &vel[i], 0);
        }
    }
}
