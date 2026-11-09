/* LEVEL_01.REL:0x09F948: reviewed 128-byte candidate, held for ABI review.
 * Walks a list calling per-node callbacks and cleanup.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_09F898 returning pointer with (pointer), but the accepted
 * LEVEL_01_09F898.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct List_29C650 {
    char pad_00[0x1C];
    int sentinel;
    int *first;
} List_29C650;

extern List_29C650 D_0029C650;
extern void func_09F8C0(int *);
extern int *func_09F898(int *);

void func_09F948(void)
{
    List_29C650 *list = &D_0029C650;
    int *node = list->first;

    if (node != (int *)&list->sentinel) {
        int next = node[5];
        for (;;) {
            void (*callback)(int *) = *(void (**)(int *))(next + 0x10);
            if (callback != 0) {
                callback(node);
                func_09F8C0(node);
            }
            next = node[6];
            if (next == 0) {
                node = func_09F898(node);
            } else {
                node = (int *)node[1];
            }
            if (node == (int *)&list->sentinel) {
                break;
            }
            next = node[5];
        }
    }
}
