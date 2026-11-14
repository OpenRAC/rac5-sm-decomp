/* USA LEVEL_16.REL:0x16A6C8, 88-byte candidate (14 November 2026).
 * Measured pinned: 5 differing words; first difference at 20.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0xF4];
    int counter;
} Owner;

typedef struct {
    Owner *owner;
    char pad4[0x1C - 4];
    unsigned int flags;
} Link;

typedef struct {
    char pad0[0x58];
    Link *link;
} Obj;

extern char D_001D6C08[];
extern void func_0A2180(int a, char *b, int c, unsigned int d);

void func_16A6C8(Obj *o, Owner **key)
{
    Link *l = o->link;

    if (!(l->flags & 1)) {
        return;
    }
    if (l->owner != *key) {
        return;
    }
    func_0A2180(l->owner->counter - 1, D_001D6C08, -0x5F, 0xFFFFFFFFu);
}
