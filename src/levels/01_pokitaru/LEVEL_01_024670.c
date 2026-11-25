/* LEVEL_01:0x024670 -- looks up a word in the record table: the record for the first index plus the shifted second index (0 or 1) chooses a slot through its selector; zero when the indices are out of range. */
typedef struct {
    char pad_00[0x10];
    char *arr[11];
    int sel;
    char pad_40[0x18];
} Cell;

typedef struct {
    Cell c[1];
} Entry;

extern Entry D_001F35D8[];

char *func_024670(unsigned int a0, int a1)
{
    int v1;

    v1 = a1 + 1;
    if (a0 < 0x19U && v1 >= 0 && v1 < 2) {
        return D_001F35D8[a0].c[v1].arr[D_001F35D8[a0].c[v1].sel];
    }
    return 0;
}
