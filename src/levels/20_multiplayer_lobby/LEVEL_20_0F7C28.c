/* LEVEL_20:0x0F7C28 -- placement copy of LEVEL_16_163BA8.c: copies bit 0 of the helper's answer for the linked handle into flag bit 3 of the object. */
typedef struct {
    char *object;
} Link;

typedef struct {
    char pad0[0x58];
    Link *link;
    char pad5C[8];
    int flags;
} Obj;

extern int func_0324C8(char *object);

void func_0F7C28(Obj *o)
{
    int answer;

    if (o->link->object != 0) {
        answer = func_0324C8(o->link->object);
        o->flags = (o->flags & ~8) | ((answer & 1) << 3);
    }
}
