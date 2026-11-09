/* LEVEL_15.REL:0x0F9C58: reviewed 112-byte candidate, held for ABI review.
 * Walks an array of records whose count and base are read from the argument
 * and calls a helper on each, then calls a finisher.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_11D5B0 returning void with (pointer), but the accepted
 * LEVEL_15_02C060.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Obj {
    char pad_00[0xEC];
    char *p_EC;
    int w_F0;
};

void func_11D5B0(char *p);
void func_0804B0(struct Obj *a0);

void func_0F9C58(struct Obj *a0)
{
    char *p;
    char *end;

    p = a0->p_EC;
    end = p + a0->w_F0 * 0x118;
    if (p != end) {
        do {
            func_11D5B0(p);
            p += 0x118;
        } while (p != end);
    }
    func_0804B0(a0);
}
