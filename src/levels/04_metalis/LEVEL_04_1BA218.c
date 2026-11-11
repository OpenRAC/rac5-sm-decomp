/* LEVEL_04:0x1BA218 -- placement copy of LEVEL_02_1CC228.c: matches each record of a set against a global pool by key and starts one effect per match, then runs two finishing calls. */

struct Rec_1CC228 {
    int key;
    int arg;
    int pad8;
    float val;
};

struct Elem_1CC228 {
    int pad0;
    int arg;
    char pad8[0x18];
    int key;
    char pad24[0x10];
};

struct Pool_1CC228 {
    char pad0[4];
    struct Elem_1CC228 *elems;
    char pad8[0x34];
    unsigned char count;
};

struct Set_1CC228 {
    char pad0[0x14];
    unsigned int count;
    struct Rec_1CC228 *recs;
    char *tail;
};

extern struct Pool_1CC228 *D_00222404;
extern char D_002317F8[];
extern char D_003B3178[];
extern char D_002276E8[];

extern void func_0379E8(char *a0, char *a1, int a2, int a3, char *t0, char *t1, float f12);
extern void func_0379C8(char *item);
extern void func_037C18(char *record, void *context, unsigned int first, unsigned int second, unsigned int third);

void func_1BA218(char *a0, char *a1, struct Set_1CC228 *set)
{
    unsigned int i;
    unsigned int j;
    struct Rec_1CC228 *rec;
    struct Elem_1CC228 *e;
    int key;
    int arg;
    float val;

    for (i = 0; i < set->count; i++) {
        rec = &set->recs[i];
        key = rec->key;
        arg = rec->arg;
        val = rec->val;
        for (j = 0; j < D_00222404->count; j++) {
            e = &D_00222404->elems[j];
            if (e->key == key) {
                func_0379E8(a1 + i * 0xE4, D_003B3178, e->arg, arg,
                            D_002317F8, D_002317F8, val);
                break;
            }
        }
    }
    func_0379C8(set->tail);
    func_037C18(a0, set->tail, (unsigned int)a1, set->count, (unsigned int)D_002276E8);
}
