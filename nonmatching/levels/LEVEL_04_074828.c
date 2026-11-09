/* LEVEL_04.REL:0x074828: reviewed 76-byte candidate, held for ABI review.
 * Releases an active object and decrements the global count of active objects.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this and 2
 * other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer), but the accepted
 * caller LEVEL_04_1C63C0.c declares it returning void with (int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x48];
    unsigned char active;
    unsigned char pending;
} Obj;

extern int D_0020F530;
extern void func_0746D8(Obj *obj);

void func_074828(Obj *obj)
{
    if (obj->active) {
        func_0746D8(obj);
        obj->active = 0;
        obj->pending = 0;
        D_0020F530--;
    }
}
