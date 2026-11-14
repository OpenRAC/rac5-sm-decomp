/* LEVEL_17:0x16B6D0 -- placement copy of LEVEL_16_1788F8.c: when the check helper accepts the record's three bytes, queues the record's handle with the object and reports 1, otherwise -1. */
typedef struct {
    int handle;
    unsigned char b4;
    unsigned char b5;
    unsigned char b6;
} Rec;
typedef struct { char pad_00[0x54]; Rec *rec; } Obj;

extern int func_112218(int a0, int a1, int a2);
extern void func_113898(Obj *o, int handle, int mode);

int func_16B6D0(Obj *o)
{
    Rec *r = o->rec;

    if (func_112218(r->b4, r->b5, r->b6) != 0) {
        return -1;
    }
    func_113898(o, r->handle, 1);
    return 1;
}
