/* LEVEL_16.REL:0x0380F8: reviewed 76-byte candidate, held for ABI review.
 * Stores the value, then submits the object's handle with the shared record
 * and the handle's current value.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_069D38 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_16_069D38.c defines it returning void with (int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x59C];
    void *handle;
    char pad5a0[0x38];
    int value;
} Obj;

extern char D_001C43F8[];
extern int func_112D18(void *handle);
extern void func_069D38(void *handle, void *record, int value);

void func_0380F8(Obj *obj, int value)
{
    obj->value = value;
    func_069D38(obj->handle, D_001C43F8, func_112D18(obj->handle));
}
