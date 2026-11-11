/* LEVEL_09:0x094D30 -- placement copy of LEVEL_01_098480.c: raises three ints of a global record table to at least the given bounds. */
typedef struct {
    char p0[8];
    int a;
    char p1[8];
    int b;
    char p2[0x30 - 0x18];
    int c;
    char p3[0x76 - 0x34];
    unsigned char flag;
    char p4[0x170C - 0x77];
} Rec;
extern Rec D_00282678[];

void func_094D30(int limit, int first, int second)
{
    int half_first = first / 2;
    int half_second = second / 2;
    unsigned int i;

    for (i = 0; i < 1; i++) {
        if (D_00282678[i].flag == 0) {
            if (D_00282678[i].c < limit)
                D_00282678[i].c = limit;
            if (D_00282678[i].a < half_first)
                D_00282678[i].a = half_first;
            if (D_00282678[i].b < half_second)
                D_00282678[i].b = half_second;
        }
    }
}
