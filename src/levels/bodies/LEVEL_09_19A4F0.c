/* LEVEL_09:0x19A4F0 -- placement copy of LEVEL_01_1A9D18.c: for objects whose definition has the expected kind, fires the pool callback once from a transformed point (mode 0) or ten times with random picks (mode 1). */

typedef struct { float x, y, z, w; } V4;

typedef struct {
    char pad_00[0x24];
    unsigned int count;
} Pool;

typedef struct {
    char pad_00[4];
    unsigned int kind;
    char pad_08[0x14];
    Pool *pool;
} Def;

typedef struct {
    char pad_00[4];
    Def *def;
    char pad_08[0x2C];
} Slot;

typedef struct {
    char pad_00[4];
    Slot *slots;
} Table;

typedef struct {
    char pad_00[0x40];
    Table *tbl;
    unsigned char idx;
} Obj;

extern void func_11D698(float *m, Obj *o);
extern void func_11F1C8(V4 *dst, float *mat, float *vec);
extern unsigned func_19A3C0(Obj *o, V4 p);
extern void func_19A4B0(Obj *o, Pool *p, unsigned int pick, int base);
extern int rand(void);

void func_19A4F0(Obj *o, int mode, int n, float *x)
{
    float m[16];
    V4 v;
    Def *def;
    Pool *pool;
    Pool *pool2;
    unsigned pick;
    unsigned int i;

    def = o->tbl->slots[o->idx].def;
    if (def->kind != 0x10000006u) {
        return;
    }
    if (mode == 0) {
        func_11D698(m, o);
        func_11F1C8(&v, m, x);
        pick = func_19A3C0(o, v);
        pool = o->tbl->slots[o->idx].def->pool;
        if (pool != 0) {
            func_19A4B0(o, pool, pick, (n + 1) * 4000 + 100000);
        }
    } else if (mode == 1) {
        pool2 = def->pool;
        if (pool2 != 0) {
            for (i = 0; i < 10; i++) {
                func_19A4B0(o, pool2, (rand() >> 2) % pool2->count, (n + 1) * 4000 + 100000);
            }
        }
    }
}
