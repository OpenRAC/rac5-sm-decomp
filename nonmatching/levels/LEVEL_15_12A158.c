/* LEVEL_15.REL:0x12A158: reviewed 68-byte candidate, held for ABI review.
 * Updates the object's two 0x34-byte sub records.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_1298F8 returning void with (pointer), but the accepted
 * LEVEL_15_0D2078.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x34];
} Elem;

typedef struct {
    int pad0;
    Elem elems[2];
} Obj;

extern void func_1298F8(Elem *);

void func_12A158(Obj *obj)
{
    unsigned int i;

    for (i = 0; i < 2; i++)
        func_1298F8(&obj->elems[i]);
}
