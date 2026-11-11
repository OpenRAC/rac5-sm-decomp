/* LEVEL_05:0x15ECB8 -- placement copy of LEVEL_01_16BBF8.c: updates the nineteen 0x1C-byte records that start at +0x2C of the object's sub-record. */
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

extern void func_094C80(char *record);

void func_15ECB8(Obj *o)
{
    Sub *s;
    unsigned int i;

    s = o->sub;
    for (i = 0; i < 0x13; i++)
        func_094C80(s->elems[i].data);
}
