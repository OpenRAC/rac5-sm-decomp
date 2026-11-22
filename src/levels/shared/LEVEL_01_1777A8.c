/* LEVEL_01:0x1777A8 -- steps the frame position of every element of each group (counting down or up by its type's step, wrapping at the limit frame) and stores the element count. */
typedef struct Lim {
    char pad_00[0x14];
    unsigned short frames;
} Lim;

typedef struct Info {
    Lim *lim;
    char pad_04[9];
    unsigned char countdown;
} Info;

typedef struct Step {
    char pad_00[8];
    float step;
} Step;

typedef struct Type {
    char pad_00[0x54];
    Info *info;
    Step *step;
} Type;

typedef struct Elem {
    Type *type;
    char pad_04[0xC];
    float pos;
    char pad_14[0x14];
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

void func_1777A8(Owner *o)
{
    Group *g;
    Elem *e;
    Elem *end;
    Info *info;
    Step *st;
    Lim *lim;

    for (g = o->groups; g != 0; g = g->next) {
        e = g->elems;
        end = e + g->count;
        do {
            info = e->type->info;
            st = e->type->step;
            lim = info->lim;
            if (info->countdown != 0) {
                e->pos = e->pos - st->step;
                if (e->pos < 0.0f)
                    e->pos = (float)lim->frames - 1.0f;
            } else {
                e->pos = e->pos + st->step;
                if ((float)lim->frames < e->pos)
                    e->pos = 0.0f;
            }
            e++;
        } while (e != end);
        g->count = end - g->elems;
    }
}
