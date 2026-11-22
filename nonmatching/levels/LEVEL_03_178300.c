/* USA LEVEL_03.REL:0x178300, 304-byte candidate (21 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Sub178300 {
    unsigned short id;
    char pad02;
    unsigned char kind;
};

struct Rec178300 {
    char pad00[0x58];
    struct Sub178300 *sub;
    char pad5C[0x08];
    unsigned int flags;
    char pad68[0x18];
};

struct Ent178300 {
    char pad00[0x0C];
    struct Rec178300 *recs;
    char pad10[0x14];
    unsigned int key;
    char pad28[0x08];
    int nrecs;
    char pad34[0x08];
    unsigned char nobjs;
    char pad3D[0x07];
};

struct Tab178300 {
    char pad00[0x34];
    struct Ent178300 *ents;
    unsigned int count;
};

struct Obj178300 {
    char pad00[0xCC];
};

struct Slot178300 {
    char pad00[0x68];
};

extern struct Tab178300 *D_0021F410;
extern struct Obj178300 *D_003B0D40;
extern struct Slot178300 D_0024A578[];

extern void func_09F8F8(struct Obj178300 *o);
extern void func_095488(struct Slot178300 *s, int id);

static __inline__ struct Ent178300 *Find178300(void)
{
    struct Ent178300 *e;
    unsigned int i;
    unsigned int key;

    key = 0x663778B5;
    e = D_0021F410->ents;
    for (i = 0; i < D_0021F410->count; i++) {
        if (e->key == key) {
            return e;
        }
        e++;
    }
    return 0;
}

void func_178300(void)
{
    struct Ent178300 *e;
    struct Obj178300 *p;
    struct Obj178300 *end;
    struct Rec178300 *r;
    struct Rec178300 *rend;
    struct Sub178300 *s;
    struct Slot178300 *slot;

    e = Find178300();
    p = D_003B0D40;
    end = p + e->nobjs;
    while (p != end) {
        func_09F8F8(p);
        p++;
    }
    r = e->recs;
    rend = r + e->nrecs;
    for (; r != rend; r++) {
        if (r->flags & 1) {
            s = r->sub;
            slot = &D_0024A578[s->kind];
            if (s->id != 0xFFFF) {
                func_095488(slot, s->id);
                s->id = 0xFFFF;
            }
        }
    }
}
