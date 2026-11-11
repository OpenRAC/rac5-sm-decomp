/* LEVEL_22:0x10D6F0 -- the first time it runs for an object (flag at +0x30 of its record still zero) it sets the flag and passes the object to func_052918. */
typedef struct {
    char pad00[0x30];
    int w30;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern void func_052918(int value);

void func_10D6F0(Obj *o)
{
    Rec *r;

    r = o->rec;
    if (r->w30 == 0) {
        r->w30 = 1;
        func_052918((int)o);
    }
}
