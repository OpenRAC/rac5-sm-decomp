/* LEVEL_03.REL:0x177C18: reviewed 72-byte candidate, held for ABI review.
 * Tags the object, then applies the argument's value to the object's sub
 * record at 0x1C with a full mask.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this and 6
 * other USA placements, but the prototypes disagree.
 * It declares func_09F8A0 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int pad0;
    int value;
} Arg;

extern char D_0023AF08[];
extern void func_09F8A0(void *obj, void *tag);
extern void func_0322F8(void *p, int value, int mask);

void func_177C18(char *obj, Arg *arg)
{
    func_09F8A0(obj, D_0023AF08);
    func_0322F8(obj + 0x1C, arg->value, 0xFFFF);
}
