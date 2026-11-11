/* LEVEL_08:0x18DFC0 -- passes the first word of the object's linked record and the object to a callback. */
typedef struct Link {
    int w0;
} Link;

typedef struct Obj {
    char pad0[0x54];
    Link *link;
} Obj;

extern void func_1F9DB0(int a, Obj *o);

void func_18DFC0(Obj *o)
{
    func_1F9DB0(o->link->w0, o);
}
