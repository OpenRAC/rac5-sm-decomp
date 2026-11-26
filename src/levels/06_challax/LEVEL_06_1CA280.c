/* LEVEL_06:0x1CA280 -- placement copy of LEVEL_01_1DCA38.c: picks a nearby target direction or randomly rotates and flips current direction. */

extern float sqrtf(float x);
extern int rand(void);

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    unsigned char pad0[0x10];
    Vec3 dir;
    unsigned char pad1C[0x14];
    void *ignored[3];
    unsigned char pad3C[0x4];
    unsigned char state;
} MoveState;

typedef struct {
    unsigned char pad0[0x30];
    Vec3 pos;
    unsigned char pad3C[0x1C];
    MoveState *move;
} Obj;

extern unsigned int func_01ABE8(void **out, int max, Vec3 *pos, int a3, int a4, int a5, int a6, float range);
extern void func_07A390(void *obj, Vec3 *out, int a2, int a3);
extern void func_11A820(void *a, void *b, float angle);

void func_1CA280(Obj *o)
{
    void *hits[4];
    Vec3 targetPos;
    MoveState *st = o->move;
    unsigned int count = func_01ABE8(hits, 3, &o->pos, 0x129, 0x101, 0x22, 1, 10.0f);

    if (count != 0) {
        unsigned int i;
        for (i = 0; i < count; i++) {
            unsigned int j;
            for (j = 0; j < 3; j++) {
                if (hits[i] != st->ignored[j]) {
                    Vec3 *dir = &st->dir;
                    Vec3 *pos = &o->pos;
                    float lenSq;
                    func_07A390(hits[i], &targetPos, 0, 0);
                    st->dir.x = targetPos.x - o->pos.x;
                    dir->y = targetPos.y - pos->y;
                    dir->z = targetPos.z - pos->z;
                    lenSq = st->dir.x * st->dir.x + dir->y * dir->y + dir->z * dir->z;
                    if (!(lenSq < 2.384185791015625e-7f)) {
                        float inv = 1.0f / sqrtf(lenSq);
                        st->dir.x *= inv;
                        dir->y *= inv;
                        dir->z *= inv;
                    }
                    st->state = 2;
                    return;
                }
            }
        }
    } else {
        float angle = (float)rand() * 4.656612873077392578125e-10f * 0.52359879f + 0.52359879f;
        Vec3 *dir = &st->dir;
        (void)rand();
        func_11A820(dir, dir, angle);
        st->dir.x = -st->dir.x;
        dir->y = -dir->y;
        dir->z = -dir->z;
    }
}
