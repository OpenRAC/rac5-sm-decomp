/* LEVEL_04:0x1C3708 -- releases an object's child by type, notifies the owner and unlinks the record from its list. */
struct Rec {
    struct Rec *next;
    char pad_04[0x10];
    struct Rec *prev;
    char pad_18[4];
    struct Child *child;
    void *owner;
    char pad_24[0x5C - 0x24];
    unsigned char pad_5c[0x66 - 0x5C];
    char pad_66[0xC2 - 0x66];
    unsigned char b_c2;
};
struct Tbl {
    char pad_00[4];
    char *recs;
};
struct Child {
    char pad_00[0x40];
    struct Tbl *tbl;
    unsigned char idx;
};
struct Obj {
    char pad_00[0x58];
    struct Rec *rec;
};

extern void func_07FAE8(struct Child *c, int a);
extern void func_1C8818(struct Child *c);
extern void func_1C71F0(struct Child *c, int a);
extern void func_1C63C0(struct Obj *o);
extern void func_198E70(void *owner, struct Obj *o);
extern void func_077E48(void *p);

void func_1C3708(struct Obj *o)
{
    struct Rec *r;
    struct Child *c;
    unsigned int tag;

    r = o->rec;
    c = r->child;
    if (c != 0) {
        tag = *(unsigned int *)(c->tbl->recs + c->idx * 0x34 + 0x20);
        if (tag == 0xF3066045u) {
            func_07FAE8(c, 1);
        } else if (tag == 0xF72A11E0u) {
            func_1C8818(c);
        } else if (tag == 0x5B0E7156u) {
            func_1C71F0(c, 0);
        }
    }
    func_1C63C0(o);
    if (r->b_c2 == 0) {
        func_198E70(r->owner, o);
    }
    func_077E48((char *)r + 0x5C);
    if (r->prev != 0) {
        r->prev->next = r->next;
        if (r->next != 0) {
            r->next->prev = r->prev;
        }
        r->prev = 0;
    }
}
