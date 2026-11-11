/* LEVEL_19:0x162F50 -- placement copy of LEVEL_16_163BA8.c: copies bit 0 of the helper's answer for the linked handle into flag bit 3 of the object. */
typedef struct {
    char *object;
} Link;

typedef struct {
    char pad0[0x58];
    Link *link;
    char pad5C[8];
    int flags;
} Obj;

extern int func_037638(char *object);

void func_162F50(Obj *o)
{
    int answer;

    if (o->link->object != 0) {
        answer = func_037638(o->link->object);
        o->flags = (o->flags & ~8) | ((answer & 1) << 3);
    }
}
