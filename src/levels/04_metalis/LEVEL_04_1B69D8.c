/* LEVEL_04:0x1B69D8 -- placement copy of LEVEL_01_1AAA00.c: runs the cleanup helper over the three element records of the object's sub-record. */
typedef struct {
    char data[0x3C];
} Elem;

typedef struct {
    char pad00[8];
    Elem elems[3];
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *sub;
} Obj;

extern void func_06FFE0(char *record);

void func_1B69D8(Obj *o)
{
    Sub *s;
    unsigned int i;

    s = o->sub;
    for (i = 0; i < 3; i++)
        func_06FFE0(s->elems[i].data);
}
