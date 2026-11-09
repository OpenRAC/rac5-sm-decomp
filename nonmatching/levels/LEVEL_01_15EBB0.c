/* LEVEL_01.REL:0x15EBB0: reviewed 240-byte candidate, held for ABI review.
 * Scans two candidate objects and stores the matching default into the output
 * slot.
 * gnu-ee-trial C with gnu-ee-trial links 240/240 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It declares func_03BD38 returning pointer with no arguments, but the
 * accepted LEVEL_01_03BD38.c defines it returning void with no arguments.
 * It declares func_03BD88 returning float with no arguments, but the accepted
 * LEVEL_01_03BD88.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Item {
    char pad[0x5C];
    int key;
};
struct Pair {
    struct Item *first;
    char pad[0x1C];
    struct Item *second;
};
struct Out {
    char pad[0x54];
    struct Pair *pair;
    void **out;
};
extern char D_00235140[];
extern int func_0286F0(int key);
extern struct Item *func_03BD38(void);
extern float func_03BD88(void);

int func_15EBB0(struct Out *o)
{
    struct Pair *pr = o->pair;
    void **out = o->out;
    struct Item *list[2] = { pr->first, pr->second };
    void *found = 0;
    float best = -1.0f;
    unsigned int i;

    for (i = 0; i < 2; i++) {
        float f;
        if (list[i] == 0)
            continue;
        if (func_0286F0(list[i]->key)) {
            *out = 0;
            return 1;
        }
        if (func_03BD38() == list[i]) {
            f = func_03BD88();
            if (best < f) {
                best = f;
                found = D_00235140;
            }
        }
    }
    *out = found;
    return found != 0;
}
