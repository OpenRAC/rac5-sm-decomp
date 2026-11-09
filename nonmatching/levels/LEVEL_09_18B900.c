/* LEVEL_09.REL:0x18B900: reviewed 72-byte candidate, held for ABI review.
 * Returns 9 when the inner check succeeds, otherwise the object's current
 * state.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_019740 returning int with no arguments, but the accepted
 * LEVEL_09_019740.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x54];
    void *p54;
} Inner;

typedef struct {
    char pad[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Inner *inner;
} Obj;

extern int func_019740(void);
extern int func_0810E8(void *p, int value);

int func_18B900(Obj *obj)
{
    Inner *inner = obj->inner;

    if (func_0810E8(inner->p54, func_019740()))
        return 9;
    return obj->state;
}
