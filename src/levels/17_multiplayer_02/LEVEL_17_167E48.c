/* LEVEL_17:0x167E48 -- placement copy of LEVEL_01_1ABD70.c: runs the helper on the three handles of the object's state record, then enables the record's extra pointer when it is set. */
typedef struct {
    int w0;
    char *extra;
    char *handle[3];
} State;

typedef struct {
    char pad0[0x58];
    State *state;
} Obj;

extern void func_1437E0(char *p);
extern void func_06FF78(char *p, int on);

void func_167E48(Obj *o)
{
    State *s = o->state;
    unsigned int i;

    for (i = 0; i < 3; i++)
        func_1437E0(s->handle[i]);
    if (s->extra != 0)
        func_06FF78(s->extra, 1);
}
