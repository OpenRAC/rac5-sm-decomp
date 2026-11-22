/* USA LEVEL_10.REL:0x19AC40, 316-byte candidate (21 November 2026).
 * Measured pinned: 1 differing words; first difference at 0x104.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Item_19AC40 {
    char pad[0x5C];
};

struct St_19AC40 {
    char pad0[0x40];
    void *tgt;
    char pad1[0x1C];
    unsigned char active;
    char pad2[3];
    struct Item_19AC40 items[2];
    float vecA[2][3];
    float vecB[2][3];
};

struct Obj_19AC40 {
    char pad[0x58];
    struct St_19AC40 *st;
};

extern float D_0022DE10[2][3];
extern char D_0022DE28[];
extern int D_002117EC;

extern int func_1A6CF0(void *a0);
extern void func_1A6C30(void *a0, int a1, float *a2);
extern void func_123D68(float *a0, float *a1, float *a2);
extern void func_1099B8(struct Item_19AC40 *a0, int a1, float *a2, float *a3, char *t0);
extern void func_108F08(struct Item_19AC40 *a0);

void func_19AC40(struct Obj_19AC40 *obj)
{
    struct St_19AC40 *st;
    float vec[16];
    int i;
    unsigned int u;

    st = obj->st;
    if (st->tgt != 0 && func_1A6CF0(st->tgt) != 0) {
        for (i = 0; i < 2; i++) {
            func_1A6C30(st->tgt, i != 0, vec);
            func_123D68(st->vecA[i], vec, D_0022DE10[i]);
        }
        if (st->active == 0) {
            for (i = 0; i < 2; i++) {
                func_1099B8(&st->items[i], D_002117EC, st->vecB[i], st->vecA[i], D_0022DE28);
            }
            st->active = 1;
        }
    } else if (st->active != 0) {
        for (u = 0; u < 2; u++) {
            func_108F08(&st->items[u]);
        }
        st->active = 0;
    }
}
