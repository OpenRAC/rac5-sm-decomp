/* LEVEL_16:0x13F480 -- gathers the candidate ids 2..14 that are not yet used and pass the checks (retrying without the owner filter when none qualify), then hands the list to the picker. */

typedef struct {
    char pad_00[0xF8];
    int owner;
} Obj;

extern int func_022890(int id, int owner);
extern int func_112BD0(int id);
extern int func_13F7F0(int *list, int n);

int func_13F480(int unused, Obj *o, int *used, unsigned int count)
{
    int list[16];
    int n;
    int *w;
    unsigned int id;
    unsigned int i;

    n = 0;
    w = list;
    for (id = 2; id < 15; id++) {
        for (i = 0; i < count; i++) {
            if (used[i] == id) {
                goto next1;
            }
        }
        if (func_022890(id, o->owner) != 0) {
            goto next1;
        }
        if (func_112BD0(id) == 0) {
            goto next1;
        }
        *w = id;
        n++;
        w++;
    next1:
        ;
    }
    if (n == 0) {
        id = 2;
        w = list;
        for (; id < 15; id++) {
            for (i = 0; i < count; i++) {
                if (used[i] == id) {
                    goto next2;
                }
            }
            if (func_112BD0(id) == 0) {
                goto next2;
            }
            *w = id;
            n++;
            w++;
        next2:
            ;
        }
        if (n == 0) {
            return 0;
        }
    }
    return func_13F7F0(list, n);
}
