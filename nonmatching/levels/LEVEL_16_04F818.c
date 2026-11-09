/* LEVEL_16.REL:0x04F818: reviewed 136-byte candidate, held for ABI review.
 * Picks a child object by index (or a default one) and, unless the owner is in
 * state 5, calls a helper with it and sets a 60.0 limit.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_051268 returning void with (float, pointer, pointer), but
 * the accepted LEVEL_16_051268.c defines it returning void with (pointer,
 * pointer, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_051268(float, char *, void *);

void func_04F818(char *state)
{
    void *object;
    char *root = *(char **)(state + 0xCA4);
    int index;
    char *table;

    if (root == 0)
        object = 0;
    else {
        index = *(int *)(state + 0xCC8);
        if (index >= 0) {
            table = *(char **)(root + 0x54);
            object = *(void **)(table + (index << 2) + 0x18);
        } else {
            table = *(char **)(root + 0x54);
            object = *(void **)(table + 0x10);
        }
    }
    if (object == 0) {
        return;
    }
    if (*(unsigned short *)(state + 0x108) == 5) {
        return;
    }
    func_051268(0.10000001f, state, object);
    *(float *)(state + 0xCD8) = 60.0f;
}
