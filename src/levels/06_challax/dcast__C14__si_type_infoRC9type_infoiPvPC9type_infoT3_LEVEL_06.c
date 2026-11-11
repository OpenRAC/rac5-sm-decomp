/* LEVEL_06:0x1DCCE8 -- placement copy of LEVEL_01_1EDDA0.c: when func_1DCC10 reports a mismatch, forwards all arguments to the virtual method in slot +0x14 of the sub-object's table (this adjusted by the table's short at +0x10) and returns its result; otherwise returns its fourth argument. */
typedef int (*Method)(char *self, int a, int b, int c, int d, int e);

typedef struct {
    char pad00[0x10];
    short adj;
    char pad12[2];
    Method fn;
} Table;

typedef struct {
    char pad00[4];
    Table *table;
} Inner;

typedef struct {
    char pad00[8];
    Inner *inner;
} Obj;

extern int func_1DCC10(Obj *o, int a);

int dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3(Obj *o, int a, int b, int c, int d, int e)
{
    Inner *p;
    Table *t;

    if (func_1DCC10(o, a) != 0)
        return c;
    p = o->inner;
    t = p->table;
    return t->fn((char *)p + t->adj, a, b, c, d, e);
}
