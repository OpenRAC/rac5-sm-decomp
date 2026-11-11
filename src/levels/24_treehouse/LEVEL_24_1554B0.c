/* LEVEL_24:0x1554B0 -- placement copy of LEVEL_01_16BBF8.c: updates the nineteen 0x1C-byte records that start at +0x2C of the object's sub-record. */
typedef struct {
    char data[0x1C];
} Elem;

typedef struct {
    char pad00[0x2C];
    Elem elems[0x13];
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *sub;
} Obj;

extern void func_090548(char *record);

void func_1554B0(Obj *o)
{
    Sub *s;
    unsigned int i;

    s = o->sub;
    for (i = 0; i < 0x13; i++)
        func_090548(s->elems[i].data);
}
