/* LEVEL_10.REL:0x153738: reviewed 76-byte candidate, held for ABI review.
 * Placement copy of LEVEL_07_157F58.c: asks the object manager for a thing and
 * copies one of its records into the global, then raises the global's flag.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0997F0 returning pointer with (pointer, pointer), but the
 * accepted LEVEL_10_0997F0.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float f[2];
    int i;
} Record;

typedef struct {
    int pad[28];
    Record rec;
} Thing;

extern Record D_39B414;
extern Thing *func_0997F0(void *owner, void *tag);

void func_153738(void)
{
    Thing *thing = func_0997F0(0, 0);
    Record *rec = &D_39B414;

    *rec = thing->rec;
    ((char *)rec)[-4] = 1;
}
