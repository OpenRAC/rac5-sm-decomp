/* LEVEL_08:0x1EC888 -- placement copy of LEVEL_04_1C3708.c: releases an object's child by type, notifies the owner and unlinks the record from its list. */
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

extern void func_0845F8(struct Child *c, int a);
extern void func_1F1998(struct Child *c);
extern void func_1F0370(struct Child *c, int a);
extern void func_1EF540(struct Obj *o);
extern void func_1B9BA0(void *owner, struct Obj *o);
extern void func_07C9C8(void *p);

void func_1EC888(struct Obj *o)
{
    struct Rec *r;
    struct Child *c;
    unsigned int tag;

    r = o->rec;
    c = r->child;
    if (c != 0) {
        tag = *(unsigned int *)(c->tbl->recs + c->idx * 0x34 + 0x20);
        if (tag == 0xF3066045u) {
            func_0845F8(c, 1);
        } else if (tag == 0xF72A11E0u) {
            func_1F1998(c);
        } else if (tag == 0x5B0E7156u) {
            func_1F0370(c, 0);
        }
    }
    func_1EF540(o);
    if (r->b_c2 == 0) {
        func_1B9BA0(r->owner, o);
    }
    func_07C9C8((char *)r + 0x5C);
    if (r->prev != 0) {
        r->prev->next = r->next;
        if (r->next != 0) {
            r->next->prev = r->prev;
        }
        r->prev = 0;
    }
}
