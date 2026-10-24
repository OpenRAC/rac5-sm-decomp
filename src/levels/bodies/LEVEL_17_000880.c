/* LEVEL_17:0x000880 -- reads the two position pairs of a table entry into the
   caller's two output records. */
typedef struct {
    float x;
    float y;
} Pair;

typedef struct {
    char pad[0x80];
    float f80;
    float f84;
    float f88;
    float f8C;
    char pad3[0x118 - 0x90];
} Row;

extern Row D_1CB8E0[];

void func_000880(Pair *out1, Pair *out2, int index)
{
    if (out1 != 0) {
        out1->x = D_1CB8E0[index].f80;
        out1->y = D_1CB8E0[index].f84;
    }
    if (out2 != 0) {
        out2->x = D_1CB8E0[index].f88;
        out2->y = D_1CB8E0[index].f8C;
    }
}
