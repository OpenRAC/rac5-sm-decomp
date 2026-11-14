/* LEVEL_10:0x1B9118 -- placement copy of LEVEL_01_1ABD70.c: runs the helper on the three handles of the object's state record, then enables the record's extra pointer when it is set. */
typedef struct {
    int w0;
    char *extra;
    char *handle[3];
} State;

typedef struct {
    char pad0[0x58];
    State *state;
} Obj;

extern void func_162BA8(char *p);
extern void func_07CCA0(char *p, int on);

void func_1B9118(Obj *o)
{
    State *s = o->state;
    unsigned int i;

    for (i = 0; i < 3; i++)
        func_162BA8(s->handle[i]);
    if (s->extra != 0)
        func_07CCA0(s->extra, 1);
}
