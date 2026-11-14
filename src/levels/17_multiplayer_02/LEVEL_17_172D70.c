/* LEVEL_17:0x172D70 -- placement copy of LEVEL_16_17F728.c: when the object's record is flagged and its first link is the given owner, reports that owner's index to the shared helper. */
typedef struct Link {
    char pad_00[0xF4];
    int index;
} Link;

typedef struct Rec {
    Link *link;
    char pad_04[0x28];
    unsigned int flags;
} Rec;

typedef struct Obj {
    char pad_00[0x58];
    Rec *rec;
} Obj;

extern char D_001CA318[];
extern void func_0A7488(int index, int previous, int id);
void func_172D70(Obj *o, Link **owner)
{
    Rec *r = o->rec;
    if (r->flags & 1) {
        if (r->link == *owner) {
            do {
                func_0A7488(r->link->index - 1, (int)D_001CA318, 0x67D);
            } while (0);
        }
    }
}
