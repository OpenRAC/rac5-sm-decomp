/* LEVEL_16:0x17E828 -- clears the linked record and returns 1. */
extern void *memset(void *p, int c, unsigned n);
typedef struct Obj { char pad00[0x58]; void *f58; } Obj;
int func_17E828(Obj *o)
{
    memset(o->f58, 0, 0x30);
    return 1;
}
