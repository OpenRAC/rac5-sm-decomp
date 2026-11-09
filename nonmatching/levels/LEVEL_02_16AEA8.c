/* LEVEL_02.REL:0x16AEA8: reviewed 68-byte candidate, held for ABI review.
 * Computes a value for the object, hands it on with the object's index and
 * returns it.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning int with (pointer), but the accepted
 * caller LEVEL_02_169EF8.c declares it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x45];
    unsigned char index;
} Obj;

extern int func_16B2F0(Obj *);
extern void func_1698B8(Obj *, int, int);

int func_16AEA8(Obj *obj)
{
    int value = func_16B2F0(obj);

    func_1698B8(obj, obj->index, value);
    return value;
}
