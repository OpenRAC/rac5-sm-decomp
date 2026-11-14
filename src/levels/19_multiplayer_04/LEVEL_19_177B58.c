/* LEVEL_19:0x177B58 -- clears the 0x27C-byte record attached to an object and reports success. */
typedef struct {
    char pad_00[0x58];
    void *rec;
} Obj;

extern void *memset(void *p, int v, unsigned int n);

int func_177B58(Obj *o)
{
    memset(o->rec, 0, 0x27C);
    return 1;
}
