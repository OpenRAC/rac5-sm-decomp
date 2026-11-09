/* LEVEL_10:0x167540 -- checks facing directions and triggers an action. */
extern void func_165CA0(void *self, int id);

typedef struct {
    float x, y, z;
} Vec3_t;

typedef struct {
    char pad0[0x108];
    float f108;
} Part_t;

typedef struct {
    char pad0[0x20];
    Vec3_t dir;
    char pad1[0x58 - 0x2C];
    Part_t *part;
} Self_t;

typedef struct {
    char pad0[0x20];
    Vec3_t dir;
} Other_t;

typedef struct {
    char pad0[0x100];
    unsigned short mode;
    char pad1[0x59C - 0x102];
    Other_t *other;
} Game_t;

extern Game_t *D_001FD5E4;

int func_167540(Self_t *self, Vec3_t *v, float f)
{
    Game_t *g;
    Vec3_t *d, *e;

    if (f < 4.5f) {
        if (self->part->f108 <= 0.0f) {
            g = D_001FD5E4;
            if ((unsigned)(g->mode - 9) < 3) {
                d = &self->dir;
                if (v->x * d->x + v->y * d->y + v->z * d->z > 0.0f) {
                    e = &g->other->dir;
                    if (v->x * e->x + v->y * e->y + v->z * e->z < 0.0f) {
                        func_165CA0(self, 9);
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
