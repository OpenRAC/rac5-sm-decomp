/* LEVEL_03:0x003608 -- placement copy of LEVEL_01_0035D0.c: calls the slot setter when the value is at least the record's limit field, forwarding all of its own arguments. */
typedef struct {
    char pad[0xC];
    int limit;
} Obj;

extern void func_001930(Obj *o, float f0, float f1, int i0, int i1);

void func_003608(Obj *o, float f0, float f1, int value, int i1)
{
    if (value >= o->limit)
        func_001930(o, f0, f1, value, i1);
}
