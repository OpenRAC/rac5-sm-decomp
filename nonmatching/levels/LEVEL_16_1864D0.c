/* LEVEL_16.REL:0x1864D0: reviewed 88-byte candidate, held for ABI review.
 * Visits each node of a linked list, then clears the list head.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this and 3
 * other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer), but the accepted
 * caller LEVEL_16_185C10.c declares it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Node1864D0 {
    char pad00[0x6C];
    struct Node1864D0 *p6C;
};

struct E1864D0 {
    char pad00[0x44];
    struct Node1864D0 *p44;
};

extern void func_186420(struct E1864D0 *e, struct Node1864D0 *n);

void func_1864D0(struct E1864D0 *e)
{
    struct Node1864D0 *n;

    n = e->p44;
    while (n != 0) {
        func_186420(e, n);
        n = n->p6C;
    }
    e->p44 = 0;
}
