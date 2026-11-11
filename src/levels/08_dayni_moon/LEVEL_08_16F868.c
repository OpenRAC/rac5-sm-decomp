/* LEVEL_08:0x16F868 -- placement copy of LEVEL_01_158F38.c: re-seeds the shared object from this one when the link's first word matches the global record's key or its second word names a live slot, then runs the follow-up with state 1. */
struct Mat;
struct Obj;

struct Link {
    int w0;
    unsigned int w4;
};

struct Thing {
    char pad00[0x54];
    struct Link *link;
};

extern unsigned char *D_0023CB2C;
extern char D_002843D0[];
extern unsigned char func_027CA8(unsigned int index);
extern void func_051010(struct Obj *o, struct Mat *s);
extern void func_0845F8(struct Thing *t, int state);

void func_16F868(struct Thing *t)
{
    struct Link *link;
    int a;

    link = t->link;
    a = link->w0;
    if ((a != 0 && a == *(int *)(D_0023CB2C + 0x1C64)) || (link->w4 != 0 && func_027CA8(link->w4) != 0)) {
        func_051010((struct Obj *)D_002843D0, (struct Mat *)t);
    }
    func_0845F8(t, 1);
}
