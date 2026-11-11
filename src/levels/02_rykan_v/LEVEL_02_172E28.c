/* LEVEL_02:0x172E28 -- placement copy of LEVEL_01_15EBB0.c: scans two candidate objects and stores the matching default into the output slot. */
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
extern char D_0024C650[];
extern int func_028ED8(int key);
extern struct Item *func_040C30(void);
extern float func_040C80(void);

int func_172E28(struct Out *o)
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
        if (func_028ED8(list[i]->key)) {
            *out = 0;
            return 1;
        }
        if (func_040C30() == list[i]) {
            f = func_040C80();
            if (best < f) {
                best = f;
                found = D_0024C650;
            }
        }
    }
    *out = found;
    return found != 0;
}
