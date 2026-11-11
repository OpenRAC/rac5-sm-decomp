/* LEVEL_15:0x003128 -- placement copy of LEVEL_01_0035D0.c: calls the slot setter when the value is at least the record's limit field, forwarding all of its own arguments. */
typedef struct {
    char pad[0xC];
    int limit;
} Obj;

extern void func_001460(Obj *o, float f0, float f1, int i0, int i1);

void func_003128(Obj *o, float f0, float f1, int value, int i1)
{
    if (value >= o->limit)
        func_001460(o, f0, f1, value, i1);
}
