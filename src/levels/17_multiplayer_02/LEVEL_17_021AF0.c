/* LEVEL_17:0x021AF0 -- placement copy of LEVEL_16_022170.c: returns a word from a two-dimensional table of records when the indices are in range, otherwise 0. */

typedef struct {
    char pad_00[0x10];
    int arr[11];
    int sel;
    char pad_40[0x14];
} Cell022170;

typedef struct {
    Cell022170 c[5];
} Entry022170;

extern Entry022170 D_00192678[];

int func_021AF0(unsigned int a0, int a1, int a2)
{
    int v1;

    v1 = a2 + 1;
    if (a0 < 0x19U && v1 >= 0 && v1 < 6) {
        return D_00192678[a0].c[v1].arr[a1];
    }
    return 0;
}
