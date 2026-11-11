/* LEVEL_10:0x003380 -- placement copy of LEVEL_01_0035D0.c: calls the slot setter when the value is at least the record's limit field, forwarding all of its own arguments. */
typedef struct {
    char pad[0xC];
    int limit;
} Obj;

extern void func_0016B8(Obj *o, float f0, float f1, int i0, int i1);

void func_003380(Obj *o, float f0, float f1, int value, int i1)
{
    if (value >= o->limit)
        func_0016B8(o, f0, f1, value, i1);
}
