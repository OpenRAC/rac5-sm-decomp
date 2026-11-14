/* LEVEL_06:0x198140 -- adds a global amount to the word the object pointer refers to when that word is nonzero; returns 1 in that case, otherwise whether the byte at +0x45 is set. */
/* LEVEL_06:0x198140 -- adds a global amount to the word the object's pointer refers to when that word is nonzero; returns 1 in that case, otherwise whether the object's byte at +0x45 is set. */
typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    int *counter;
} Obj;

extern int D_001F5994;

int func_198140(Obj *o)
{
    int *p = o->counter;
    int v = *p;
    int bumped;

    if (v == 0) {
        bumped = 0;
    } else {
        *p = D_001F5994 + v;
        bumped = 1;
    }
    if (!bumped) {
        if (o->b45 == 0) {
            return 0;
        }
    }
    return 1;
}
