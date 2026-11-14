/* LEVEL_01:0x148A88 -- clears the 0xA8-byte record attached to an object and reports success. */
typedef struct {
    char pad_00[0x58];
    void *rec;
} Obj;

extern void *memset(void *p, int v, unsigned int n);

int func_148A88(Obj *o)
{
    memset(o->rec, 0, 0xA8);
    return 1;
}
