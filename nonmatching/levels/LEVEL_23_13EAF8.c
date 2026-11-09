/* LEVEL_23.REL:0x13EAF8: reviewed 136-byte candidate, held for ABI review.
 * Appends an object pointer to a 32-slot table, guarded by a float limit.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (pointer), but the accepted
 * caller LEVEL_23_13EE60.c declares it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct RegTable {
    void *slot[32];
    int count;
};

struct Sub {
    char pad[0xAC];
    float v;
};

struct Obj {
    char pad[0x58];
    struct Sub *sub;
};

extern struct RegTable D_00363618;
extern char D_0013ED50[];
extern void func_077FF8();

void func_13EAF8(struct Obj *a0)
{
    int n = D_00363618.count;
    struct Sub *s = a0->sub;

    if (n < 0x20) {
        if (!(16384.0f < s->v)) {
            D_00363618.slot[n] = a0;
            if (D_00363618.count <= 0) {
                func_077FF8(a0, D_0013ED50, 1);
            }
            D_00363618.count++;
        }
    }
}
