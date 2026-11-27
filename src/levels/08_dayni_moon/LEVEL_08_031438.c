/* LEVEL_08:0x031438 -- placement copy of LEVEL_02_031C28.c: steps the actor along its path: once the dispatch reports arrival, advances the byte cursor and copies the next waypoint's x and z, returning 1 when the cursor runs past the last record. */
typedef struct Ent031C28 {
    float x;
    float y;
    float z;
    float w;
} Ent031C28;

typedef struct Tbl031C28 {
    unsigned char pad_00[4];
    Ent031C28 *recs_04;
    unsigned char pad_08[0xC];
    unsigned short count_14;
} Tbl031C28;

extern int func_030678(float, char *out, char *actor, float *other, long long);

int func_031438(float *out, char *actor, float *other, Tbl031C28 *tbl, unsigned char *cnt, int flags)
{
    Ent031C28 *e;

    if (((int (*)(float amount, char *out, char *actor, float *other, int flags))func_030678)(0.2f, (char *)out, actor, other, flags | 3) == 0) {
        (*cnt)++;
        if (*cnt >= tbl->count_14)
            return 1;
        e = (Ent031C28 *)(*cnt * sizeof(Ent031C28) + (unsigned int)tbl->recs_04);
        out[0] = e->x;
        out[1] = e->z;
    }
    return 0;
}
