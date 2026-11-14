/* LEVEL_16:0x171F30 -- runs the handler on the linked word of every flagged, active 0x80-byte record of an object's record table. */
typedef struct Link {
    char pad00[4];
    int w04;
} Link;

typedef struct Info {
    char pad00[0x36];
    unsigned char b36;
} Info;

typedef struct Rec {
    char pad00[0x45];
    unsigned char active;
    char pad46[0x54 - 0x46];
    Link *link;
    Info *info;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
    char pad68[0x80 - 0x68];
} Rec;

typedef struct Obj {
    char pad00[0xC];
    Rec *recs;
    char pad10[0x30 - 0x10];
    int count;
} Obj;

extern void func_14B018(int a, int b);

void func_171F30(Obj *o)
{
    Rec *p;
    Rec *end;

    p = o->recs;
    end = p + o->count;
    for (; p != end; p++) {
        if (p->flags & 1) {
            if (p->active != 0) {
                func_14B018(p->link->w04, p->info->b36);
            }
        }
    }
}
