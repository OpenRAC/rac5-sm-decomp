/* LEVEL_15:0x0FC800 -- runs the shared step on every item of every group in the object's group list. */
typedef struct Group {
    struct Group *next;
    char pad04[8];
    char *items;
    int count;
} Group;

typedef struct {
    char pad00[8];
    Group *groups;
} Obj;

extern void func_0FBA08(char *item);

void func_0FC800(Obj *o)
{
    Group *g = o->groups;
    char *p;
    char *end;

    if (g != 0) {
        do {
            p = g->items;
            end = p + g->count * 0x70;
            do {
                func_0FBA08(p);
                p += 0x70;
            } while (p != end);
            g = g->next;
        } while (g != 0);
    }
}
