/* LEVEL_01:0x158F38 -- re-seeds the shared object from this one when the link's first word matches the global record's key or its second word names a live slot, then runs the follow-up with state 1. */
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

extern unsigned char *D_001F3FAC;
extern char D_00235140[];
extern unsigned char func_027680(unsigned int index);
extern void func_04BF08(struct Obj *o, struct Mat *s);
extern void func_07C670(struct Thing *t, int state);

void func_158F38(struct Thing *t)
{
    struct Link *link;
    int a;

    link = t->link;
    a = link->w0;
    if ((a != 0 && a == *(int *)(D_001F3FAC + 0x1C64)) || (link->w4 != 0 && func_027680(link->w4) != 0)) {
        func_04BF08((struct Obj *)D_00235140, (struct Mat *)t);
    }
    func_07C670(t, 1);
}
