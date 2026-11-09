/* LEVEL_01.REL:0x1A9D18: reviewed 340-byte candidate, held for ABI review.
 * For objects whose definition has the expected kind, fires the pool callback
 * once from a transformed point (mode 0) or ten times with random picks (mode
 * 1).
 * pinned C with gnu-ee-trial links 340/340 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_126100 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_01_126100.c defines it returning void with (pointer, pointer,
 * pointer).
 * It declares func_1A9BE8 returning int with (pointer, pointer), but the
 * accepted LEVEL_01_1A9BE8.c defines it returning int with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern void func_124258(float *m, Obj *o);
extern void func_126100(float *v, float *m, int x);
extern int func_1A9BE8(Obj *o, float *v);
extern void func_1A9CD8(Obj *o, Pool *p, unsigned int pick, int base);
extern int rand(void);

void func_1A9D18(Obj *o, int mode, int n, int x)
{
    float m[16];
    float v[4];
    Def *def;
    Pool *pool;
    Pool *pool2;
    int pick;
    unsigned int i;

    def = o->tbl->slots[o->idx].def;
    if (def->kind != 0x10000006u) {
        return;
    }
    if (mode == 0) {
        func_124258(m, o);
        func_126100(v, m, x);
        pick = func_1A9BE8(o, v);
        pool = o->tbl->slots[o->idx].def->pool;
        if (pool != 0) {
            func_1A9CD8(o, pool, pick, (n + 1) * 4000 + 100000);
        }
    } else if (mode == 1) {
        pool2 = def->pool;
        if (pool2 != 0) {
            for (i = 0; i < 10; i++) {
                func_1A9CD8(o, pool2, (rand() >> 2) % pool2->count, (n + 1) * 4000 + 100000);
            }
        }
    }
}
