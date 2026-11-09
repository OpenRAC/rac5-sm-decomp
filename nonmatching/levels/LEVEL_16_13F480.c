/* LEVEL_16.REL:0x13F480: reviewed 344-byte candidate, held for ABI review.
 * Gathers the candidate ids 2..14 that are not yet used and pass the checks
 * (retrying without the owner filter when none qualify), then hands the list
 * to the picker.
 * pinned C with gnu-ee-trial links 344/344 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_022890 returning int with (int, int), but the accepted
 * LEVEL_16_022890.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
