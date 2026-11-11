/* LEVEL_16:0x159C98 -- clears the 0x1E8-byte record behind the object's link. */
typedef struct {
    char pad_00[0x58];
    char *rec;
} Obj;

extern void *memset(void *, int, unsigned int);

void func_159C98(Obj *o)
{
    memset(o->rec, 0, 0x1e8);
}
