/* LEVEL_08:0x1C9780 -- two-state timer step: state 1 reacts to the linked object's state (3 or 2), state 2 advances the elapsed time and either finishes the interval or shortens the remaining time. */
typedef struct {
    char pad00[4];
    int f04;
    char pad08[0x30];
    float f38;
} Aux;

typedef struct {
    char pad00[0x45];
    unsigned char state;
} Other;

typedef struct {
    Other *other;
} Holder;

typedef struct {
    char pad00[0x34];
    float f34;
    char pad38[0xD];
    unsigned char state;
    unsigned char b46;
    char pad47[0xD];
    Holder *holder;
    Aux *aux;
    char pad5C[0x14];
    float f70;
} Obj;

void func_1C9780(Obj *o)
{
    Holder *h = o->holder;
    Aux *a = o->aux;
    unsigned char s;

    switch (o->state) {
    case 1:
        s = h->other->state;
        if (s == 3) {
            o->b46 = 0;
            o->state = 2;
            a->f04 = 1;
            a->f38 = 0.0f;
            o->f70 = 1.0f;
        } else if (s == 2) {
            o->state = 2;
            o->b46 = 1;
            a->f38 = 0.0f;
            o->f70 = 1.0f;
        }
        break;
    case 2:
        a->f38 = a->f38 + 0.011111112f;
        if (o->f70 <= a->f38) {
            o->f34 = o->f34 - o->f70;
            if (o->b46 == 1) {
                o->state = 1;
            } else {
                o->state = 0;
            }
        } else {
            o->f70 = o->f70 - a->f38;
            o->f34 = o->f34 - a->f38;
        }
        break;
    }
}
