/* LEVEL_16:0x1788F8 -- when the check helper accepts the record's three bytes, queues the record's handle with the object and reports 1, otherwise -1. */
typedef struct {
    int handle;
    unsigned char b4;
    unsigned char b5;
    unsigned char b6;
} Rec;
typedef struct { char pad_00[0x54]; Rec *rec; } Obj;

extern int func_112A88(int a0, int a1, int a2);
extern void func_114108(Obj *o, int handle, int mode);

int func_1788F8(Obj *o)
{
    Rec *r = o->rec;

    if (func_112A88(r->b4, r->b5, r->b6) != 0) {
        return -1;
    }
    func_114108(o, r->handle, 1);
    return 1;
}
