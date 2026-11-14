/* LEVEL_22:0x10E510 -- looks up two objects by hash, stores them in the global pair and sets their float at +0x1C to 50. */
typedef struct {
    char pad00[0x1C];
    float f1C;
} Obj;

typedef struct {
    Obj *first;
    Obj *second;
} Pair;

extern Pair D_002E7240;
extern Obj *func_100C58(unsigned int value);

void func_10E510(void)
{
    Obj *a;
    Obj *b;

    a = func_100C58(0x4B853E31u);
    D_002E7240.second = a;
    if (a != 0) {
        a->f1C = 50.0f;
    }
    b = func_100C58(0x243F987Bu);
    D_002E7240.first = b;
    if (b != 0) {
        b->f1C = 50.0f;
    }
}
