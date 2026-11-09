/* LEVEL_10.REL:0x1740E8: reviewed 68-byte candidate, held for ABI review.
 * Starts the object's embedded effect and switches it to state 1.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_003668 returning void with (pointer, int, int, float), but
 * the accepted LEVEL_10_003668.c defines it returning void with (pointer,
 * pointer, pointer, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_003668(void *, int, int, float);
extern void func_173F40(void *, int);

void func_1740E8(char *obj)
{
    func_003668(obj + 0x20, 100, 3, 1.0f);
    func_173F40(obj, 1);
}
