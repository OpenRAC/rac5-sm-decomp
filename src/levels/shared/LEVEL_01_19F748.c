/* LEVEL_01:0x19F748 -- adds 2 to two adjacent byte counters of the object. */
typedef struct {
    char pad[0x78];
    unsigned char c78;
    unsigned char c79;
} Obj;

void func_19F748(Obj *o)
{
    o->c79 += 2;
    o->c78 += 2;
}
