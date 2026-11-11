/* LEVEL_03:0x178FD0 -- clears two words of the object's linked record. */
typedef struct {
    char pad00[8];
    int f08;
    int f0C;
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
} Obj;

void func_178FD0(Obj *o)
{
    Rec *r = o->rec;

    r->f0C = 0;
    r->f08 = 0;
}
