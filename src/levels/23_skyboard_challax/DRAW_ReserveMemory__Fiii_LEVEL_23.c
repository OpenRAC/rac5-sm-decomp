/* LEVEL_23:0x08DE08 -- placement copy of LEVEL_01_098480.c: raises three ints of a global record table to at least the given bounds. */
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
extern Rec D_0026C338[];

void DRAW_ReserveMemory__Fiii(int limit, int first, int second)
{
    int half_first = first / 2;
    int half_second = second / 2;
    unsigned int i;

    for (i = 0; i < 1; i++) {
        if (D_0026C338[i].flag == 0) {
            if (D_0026C338[i].c < limit)
                D_0026C338[i].c = limit;
            if (D_0026C338[i].a < half_first)
                D_0026C338[i].a = half_first;
            if (D_0026C338[i].b < half_second)
                D_0026C338[i].b = half_second;
        }
    }
}
