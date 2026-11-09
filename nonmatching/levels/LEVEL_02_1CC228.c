/* LEVEL_02.REL:0x1CC228: reviewed 312-byte candidate, held for ABI review.
 * Matches each record of a set against a global pool by key and starts one
 * effect per match, then runs two finishing calls.
 * pinned C with gnu-ee-trial links 312/312 bytes and is byte-exact at this and
 * 2 other USA placements, but the prototypes disagree.
 * It declares func_03ADC8 returning void with (int), but the accepted
 * LEVEL_02_03ADC8.c defines it returning void with (pointer).
 * It declares func_03B018 returning void with (pointer, int, pointer, int,
 * pointer), but the accepted LEVEL_02_03B018.c defines it returning void with
 * (pointer, pointer, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
    int tail;
};

extern struct Pool_1CC228 *D_0021DD64;
extern char D_0022CDF8[];
extern char D_003B01E0[];
extern char D_00222CE8[];

extern void func_03ADE8(char *a0, char *a1, int a2, int a3, char *t0, char *t1, float f12);
extern void func_03ADC8(int a0);
extern void func_03B018(char *a0, int a1, char *a2, int a3, char *t0);

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
    func_03B018(a0, set->tail, a1, set->count, D_00222CE8);
}
