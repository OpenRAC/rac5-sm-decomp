/* LEVEL_16:0x15FEC0 -- refreshes two shared tables for the object's record (offset by state 11), then unlinks the record's embedded node by moving its link word into the stored neighbour. */
struct Node {
    int w00;
    char pad04[0x10];
    struct Node *p14;
};

struct Sub {
    unsigned int w00;
    char pad04[0x10];
    struct Node *p14;
};

struct Rec {
    char pad00[0x84];
    struct Sub sub;
};

struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x12];
    struct Rec *rec;
};

extern int D_002E5368;
extern char D_001BDE00[];
extern char D_001D5B00[];
extern void func_0E7AF8(int a0, int a1);
extern void func_15DD20(char *dst, char *table);

void func_15FEC0(struct Obj *o)
{
    struct Rec *rec;
    struct Sub *v;
    struct Node *p;
    struct Node *q;

    rec = o->rec;
    func_0E7AF8(D_002E5368, (int)D_001BDE00);
    if (o->b45 != 0xB) {
        func_15DD20((char *)rec + 0x30, D_001D5B00);
    } else {
        func_15DD20((char *)rec + 0xBC, D_001D5B00);
    }
    v = &rec->sub;
    p = v->p14;
    if (p == 0) {
        return;
    }
    p->w00 = v->w00;
    q = (struct Node *)v->w00;
    if (q == 0) {
        v->p14 = 0;
        return;
    }
    q->p14 = v->p14;
    v->p14 = 0;
}
