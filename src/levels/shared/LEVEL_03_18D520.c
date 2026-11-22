/* LEVEL_03:0x18D520 -- randomises the colour bytes, sets the shared flag on the entry's target and starts the object either idle (flag byte 1) or in state 2 with a random position along the link's span. */
typedef struct {
    char pad_00[4];
    float f4;
    float f8;
} Link;

typedef struct {
    int w0;
    unsigned char b4;
} Rec;

typedef struct {
    char pad_00[4];
    struct {
        char pad_00[4];
        struct {
            char pad_00[0x0C];
            struct {
                char pad_00[0x68];
                unsigned int flags;
            } *target;
        } *info;
        char pad_08[0x2C];
    } *ents;
} Table;

typedef struct {
    char pad_00[0x40];
    Table *table;
    unsigned char idx;
    unsigned char state;
    char pad_46[0x0E];
    Link *link;
    Rec *rec;
    int w5C;
    char pad_60[0x10];
    float f70;
    char pad_74[2];
    unsigned char b76;
    unsigned char b77;
    unsigned char b78;
    unsigned char b79;
} Obj;

extern int rand(void);

int func_18D520(Obj *o)
{
    Link *link = o->link;
    Rec *rec = o->rec;
    float f;
    float g;

    o->b78 = rand() % 0xFF;
    o->b79 = rand() % 0xFF;
    o->b76 = 0x37;
    o->b77 = 0x37;
    o->table->ents[o->idx].info->target->flags |= 0x40;
    if (o->w5C == 0) {
        rec->b4 = 1;
    } else {
        rec->b4 = 0;
        o->state = 2;
        f = link->f8;
        g = -f - f;
        o->f70 = link->f4 + (f + g * ((float)rand() * 4.656613e-10f));
    }
    rec->w0 = 0;
    return 1;
}
