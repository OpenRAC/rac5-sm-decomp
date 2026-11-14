/* LEVEL_08:0x189358 -- updates the ten 0x54-byte records that start at +4 of the object's sub-record. */
typedef struct {
    char data[0x54];
} Elem;

typedef struct {
    char pad00[4];
    Elem elems[10];
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *sub;
} Obj;

extern void func_09F668(char *record);

void func_189358(Obj *o)
{
    Sub *s;
    unsigned int i;

    s = o->sub;
    for (i = 0; i < 10; i++)
        func_09F668(s->elems[i].data);
}
