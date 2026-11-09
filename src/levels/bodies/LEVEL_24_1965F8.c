/* LEVEL_24:0x1965F8 -- placement copy of LEVEL_04_1C79D0.c: copies the object's transform with the height raised, spawns the matching table object there and links it back to this object. */

typedef struct {
    char pad_00[0x24];
    unsigned int id;
    char pad_28[0x1C];
} Entry;

typedef struct {
    char pad_00[0x34];
    Entry *items;
    unsigned int count;
} Table;

extern Table *D_001D7A10;
extern char *func_076C50(Entry *e, unsigned int key, float *mat, int a);

static __inline__ void CopyMat(float *d, float *s)
{
    d[8] = s[8];
    d[9] = s[9];
    d[10] = s[10];
    d[11] = s[11];
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[12] = s[12];
    d[13] = s[13];
    d[14] = s[14];
    d[15] = s[15];
}

static __inline__ Entry *FindEntry(unsigned int key)
{
    Table *tbl;
    unsigned int i;

    tbl = D_001D7A10;
    for (i = 0; i < tbl->count; i++) {
        if (tbl->items[i].id == key) {
            return &tbl->items[i];
        }
    }
    return 0;
}

char *func_1965F8(float *o)
{
    float m[16];
    float *mp;
    Entry *e;
    unsigned int key;
    char *obj;

    key = 0xF3066045;
    mp = m;
    CopyMat(mp, o);
    mp[13] = mp[13] + 0.26f;
    e = FindEntry(key);
    if (e == 0) {
        obj = 0;
    } else {
        obj = func_076C50(e, key, mp, 0xFF);
    }
    if (obj == 0) {
        return 0;
    }
    *(float **)(*(char **)(obj + 0x58) + 0x18) = o;
    return obj;
}
