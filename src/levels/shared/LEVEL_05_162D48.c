/* LEVEL_05:0x162D48 -- clears the 0x144-byte child block of the object. */
extern void *memset(void *, int, unsigned int);

typedef struct {
    char pad[0x58];
    void *child;
} Obj;

void func_162D48(Obj *o)
{
    memset(o->child, 0, 0x144);
}
