/* FRONTEND.REL:0x01F390: reviewed 204-byte candidate, held for ABI review.
 * Looks up a handle, validates an entry and updates it.
 * pinned C with gnu-ee-trial links 204/204 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_00109928[];
extern int func_01DFF0(int key, char *name);
extern void func_01E1A0(Entry *e, unsigned int a, int b, int h);
extern int func_01F150(Entry *e);
extern int func_01F460(Owner *o, Entry *e);
extern void func_01E280(int h);

int func_01F390(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_01DFF0(key, D_00109928);
    if (h != 0) {
        func_01E1A0(entry, val, 1, h);
        if (func_01F150(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_01F460(owner, entry);
                owner->key = key;
            }
        }
        func_01E280(h);
    }
    return ret;
}
