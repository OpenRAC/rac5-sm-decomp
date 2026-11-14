/* USA LEVEL_22.REL:0x113B60, 92-byte candidate (14 November 2026).
 * Measured pinned: 15 differing words; first difference at 0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Entry {
    char pad_00[0x10];
    float v[4];
    char pad_20[0x10];
} Entry;

typedef struct Pool {
    char pad_00[0x5C];
    Entry *entries;
    unsigned char used[0x3C];
} Pool;

typedef struct Obj {
    char pad_00[0x58];
    Pool *pool;
} Obj;

void func_113B60(Obj *obj)
{
    Pool *pool;
    unsigned char i;
    float *p;

    pool = obj->pool;
    for (i = 0; i < 0x3C; i++) {
        if (pool->used[i] == 0) {
            p = pool->entries[i].v;
            p[2] = p[1] = p[0] = p[3] = 0.0f;
        }
    }
}
