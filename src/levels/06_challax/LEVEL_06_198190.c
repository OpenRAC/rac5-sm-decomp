/* LEVEL_06:0x198190 -- while the object is in state 0, when the check on its first linked word accepts the shared block, forwards the global handle with the object's word and starts the 1 handler. */
extern char D_00221EC0[];
extern int D_00209670;

typedef struct Link {
    int w0;
} Link;

typedef struct Obj {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Link *link;
    int w58;
    int w5C;
} Obj;

extern int func_07D818(int a, char *b);
extern void func_026398(int a, int b, int c);
extern void func_076268(Obj *o, int n);

void func_198190(Obj *o)
{
    Link *l;
    char *b;

    l = o->link;
    if (o->state == 0) {
        b = D_00221EC0;
        if (func_07D818(l->w0, b + 0x30) != 0) {
            func_026398(D_00209670, o->w5C, 1);
            func_076268(o, 1);
        }
    }
}
