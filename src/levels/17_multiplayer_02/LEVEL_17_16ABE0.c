/* LEVEL_17:0x16ABE0 -- on first call, finds a keyed entry in a global list and runs a handler over its node chain. */
typedef struct {
    char pad0[0x62];
    unsigned char extra;
} Node16ABE0;

typedef struct {
    unsigned int id;
    char pad4[0xC];
    Node16ABE0 *nodes;
    unsigned int count;
} Ent16ABE0;

typedef struct {
    char pad0[0x24];
    Ent16ABE0 *ents;
    unsigned int count;
} Ctx16ABE0;

extern Ctx16ABE0 *D_001A7EA0;
extern unsigned char D_001B1818;
extern void func_076A90(Node16ABE0 *n);

void func_16ABE0(void)
{
    Ent16ABE0 *found;
    Node16ABE0 *n;
    unsigned int i;
    unsigned int j;

    if (D_001B1818)
        return;
    found = 0;
    for (i = 0; i < D_001A7EA0->count; i++) {
        Ent16ABE0 *e = &D_001A7EA0->ents[i];
        if (e->id == 0x175C895B) {
            found = e;
            break;
        }
    }
    if (found) {
        n = found->nodes;
        for (j = 0; j < found->count; j++) {
            func_076A90(n);
            n = (Node16ABE0 *)((char *)n + (n->extra * 8 + 0x64));
        }
    }
    D_001B1818 = 1;
}
