/* LEVEL_16:0x16A6C8 -- when the linked record is flagged and its owner is the one named by the key, calls the helper with the owner's counter minus one. */
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

    if (l->flags & 1) {
        if (l->owner == *key) {
            do {
                func_0A2180(l->owner->counter - 1, D_001D6C08, -0x5F, 0xFFFFFFFFu);
            } while (0);
        }
    }
}
