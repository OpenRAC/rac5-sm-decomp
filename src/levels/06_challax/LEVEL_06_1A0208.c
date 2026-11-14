/* LEVEL_06:0x1A0208 -- placement copy of LEVEL_01_1ABD70.c: runs the helper on the three handles of the object's state record, then enables the record's extra pointer when it is set. */
typedef struct {
    int w0;
    char *extra;
    char *handle[3];
} State;

typedef struct {
    char pad0[0x58];
    State *state;
} Obj;

extern void func_15A908(char *p);
extern void func_076268(char *p, int on);

void func_1A0208(Obj *o)
{
    State *s = o->state;
    unsigned int i;

    for (i = 0; i < 3; i++)
        func_15A908(s->handle[i]);
    if (s->extra != 0)
        func_076268(s->extra, 1);
}
