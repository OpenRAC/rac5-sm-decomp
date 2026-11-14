/* LEVEL_01:0x175480 -- steps the playback position of every element of each group (counting down or up by its rate times 1/30, wrapping at the limits) and stores the element count. */
typedef struct Info {
    char pad_00[4];
    float limit;
    char pad_08[5];
    unsigned char countdown;
} Info;

typedef struct Type {
    char pad_00[0x54];
    Info *info;
} Type;

typedef struct Elem {
    Type *type;
    float rate;
    char pad_08[8];
    float pos;
    char pad_14[8];
} Elem;

typedef struct Group {
    struct Group *next;
    char pad_04[4];
    char pad_08[4];
    Elem *elems;
    int count;
} Group;

typedef struct Owner {
    char pad_00[8];
    Group *groups;
} Owner;

void func_175480(Owner *o)
{
    Group *g;
    Elem *e;
    Elem *end;
    Info *info;

    for (g = o->groups; g != 0; g = g->next) {
        e = g->elems;
        end = e + g->count;
        do {
            info = e->type->info;
            if (info->countdown != 0) {
                e->pos = e->pos - e->rate * 0.03333333507180214f;
                if (e->pos < 0.0f)
                    e->pos = info->limit;
            } else {
                e->pos = e->pos + e->rate * 0.03333333507180214f;
                if (info->limit < e->pos)
                    e->pos = 0.0f;
            }
            e++;
        } while (e != end);
        g->count = end - g->elems;
    }
}
