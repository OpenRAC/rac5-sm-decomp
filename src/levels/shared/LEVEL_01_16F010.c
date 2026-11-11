/* LEVEL_01:0x16F010 -- clears the 0x160-byte record attached to an object. */
typedef struct {
    char pad_00[0x58];
    void *rec;
} Obj;

extern void *memset(void *p, int v, unsigned int n);

void func_16F010(Obj *o)
{
    memset(o->rec, 0, 0x160);
}
