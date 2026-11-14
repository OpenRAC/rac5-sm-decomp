/* LEVEL_23:0x135030 -- placement copy of LEVEL_22_10E510.c: looks up two objects by hash, stores them in the global pair and sets their float at +0x1C to 50. */
typedef struct {
    char pad00[0x1C];
    float f1C;
} Obj;

typedef struct {
    Obj *first;
    Obj *second;
} Pair;

extern Pair D_00362E38;
extern Obj *func_11AEE0(unsigned int value);

void func_135030(void)
{
    Obj *a;
    Obj *b;

    a = func_11AEE0(0x4B853E31u);
    D_00362E38.second = a;
    if (a != 0) {
        a->f1C = 50.0f;
    }
    b = func_11AEE0(0x243F987Bu);
    D_00362E38.first = b;
    if (b != 0) {
        b->f1C = 50.0f;
    }
}
