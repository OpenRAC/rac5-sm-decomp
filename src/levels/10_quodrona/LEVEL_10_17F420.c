/* LEVEL_10:0x17F420 -- runs the shared handler on the object's linked record when its flag byte is set. */
typedef struct Link {
    char pad0[0x60];
    unsigned char flag;
} Link;

typedef struct Obj {
    char pad0[0x58];
    Link *link;
} Obj;

extern void func_108F08(Link *l);

void func_17F420(Obj *o)
{
    Link *l = o->link;

    if (l->flag)
        func_108F08(l);
}
