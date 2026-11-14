/* LEVEL_09:0x180078 -- updates the nineteen 0x1C-byte records that start at +8 of the object's sub-record. */
typedef struct {
    char data[0x1C];
} Elem;

typedef struct {
    char pad00[8];
    Elem elems[0x13];
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *sub;
} Obj;

extern void func_093EA0(char *record);

void func_180078(Obj *o)
{
    Sub *s;
    unsigned int i;

    s = o->sub;
    for (i = 0; i < 0x13; i++)
        func_093EA0(s->elems[i].data);
}
