/* LEVEL_01:0x0D84B8 -- appends one 28-byte record to a context table when the context is not full. */
struct Entry {
    char kind;
    char pad[3];
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
};

struct Ctx {
    struct Entry *items;
    char pad[0x4C - 4];
    int flag;
    int count;
};

int func_0D84B8(struct Ctx *context, int a, int b, int c, int d, int e, int f)
{
    if (context->flag != 0) {
        return 0;
    }
    context->items[context->count].kind = 1;
    context->items[context->count].c = c;
    context->items[context->count].d = d;
    context->items[context->count].e = e;
    context->items[context->count].f = f;
    context->items[context->count].a = a;
    context->items[context->count].b = b;
    context->count = context->count + 1;
    return 1;
}
