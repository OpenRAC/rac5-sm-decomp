/* LEVEL_19:0x173210 -- placement copy of LEVEL_16_1788F8.c: when the check helper accepts the record's three bytes, queues the record's handle with the object and reports 1, otherwise -1. */
typedef struct {
    int handle;
    unsigned char b4;
    unsigned char b5;
    unsigned char b6;
} Rec;
typedef struct { char pad_00[0x54]; Rec *rec; } Obj;

extern int func_113230(int a0, int a1, int a2);
extern void func_1148B0(Obj *o, int handle, int mode);

int func_173210(Obj *o)
{
    Rec *r = o->rec;

    if (func_113230(r->b4, r->b5, r->b6) != 0) {
        return -1;
    }
    func_1148B0(o, r->handle, 1);
    return 1;
}
