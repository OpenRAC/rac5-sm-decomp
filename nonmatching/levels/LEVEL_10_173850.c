/* LEVEL_10.REL:0x173850: reviewed 72-byte candidate, held for ABI review.
 * Configures the owner, then passes its info word and sub-record to the second
 * helper.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_08C178 returning void with (int, pointer), but the accepted
 * LEVEL_10_08C178.c defines it returning int with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0x48];
    int value;
} Info;

typedef struct {
    char pad[0x370];
    char sub[0x22C];
    Info *info;
} Owner;

typedef struct {
    int pad0;
    Owner *owner;
} Obj;

extern void func_069E08(Owner *owner, int a, int b, int c);
extern void func_08C178(int value, void *sub);

void func_173850(Obj *obj)
{
    func_069E08(obj->owner, 14, 0xFFFF, 8);
    func_08C178(obj->owner->info->value, obj->owner->sub);
}
