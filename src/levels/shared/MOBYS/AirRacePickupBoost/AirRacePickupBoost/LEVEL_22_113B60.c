/* LEVEL_22:0x113B60 -- zeroes the four floats of every unused entry (flag byte clear) of the object's 60-entry pool. */
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
            p = (float *)(i * sizeof(Entry) + (unsigned int)pool->entries);
            p += 4;
            p[3] = p[2] = p[1] = p[0] = 0.0f;
        }
    }
}
