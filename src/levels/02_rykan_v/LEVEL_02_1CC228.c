/* LEVEL_02:0x1CC228 -- matches each record of a set against a global pool by key and starts one effect per match, then runs two finishing calls. */

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

extern struct Pool_1CC228 *D_0021DD64;
extern char D_0022CDF8[];
extern char D_003B01E0[];
extern char D_00222CE8[];

extern void func_03ADE8(char *a0, char *a1, int a2, int a3, char *t0, char *t1, float f12);
extern void func_03ADC8(char *item);
extern void func_03B018(char *record, void *context, unsigned int first, unsigned int second, unsigned int third);

void func_1CC228(char *a0, char *a1, struct Set_1CC228 *set)
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
        for (j = 0; j < D_0021DD64->count; j++) {
            e = &D_0021DD64->elems[j];
            if (e->key == key) {
                func_03ADE8(a1 + i * 0xE4, D_003B01E0, e->arg, arg,
                            D_0022CDF8, D_0022CDF8, val);
                break;
            }
        }
    }
    func_03ADC8(set->tail);
    func_03B018(a0, set->tail, (unsigned int)a1, set->count, (unsigned int)D_00222CE8);
}
