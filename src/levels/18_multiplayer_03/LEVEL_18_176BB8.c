/* LEVEL_18:0x176BB8 -- placement copy of LEVEL_01_1ABD70.c: runs the helper on the three handles of the object's state record, then enables the record's extra pointer when it is set. */
typedef struct {
    int w0;
    char *extra;
    char *handle[3];
} State;

typedef struct {
    char pad0[0x58];
    State *state;
} Obj;

extern void func_1438A0(char *p);
extern void func_06F008(char *p);

void func_176BB8(Obj *o)
{
    State *s = o->state;
    unsigned int i;

    for (i = 0; i < 3; i++)
        func_1438A0(s->handle[i]);
    if (s->extra != 0)
        ((void (*)(char *p, int on))func_06F008)(s->extra, 1);
}
