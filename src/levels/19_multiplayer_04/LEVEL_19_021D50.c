/* LEVEL_19:0x021D50 -- placement copy of LEVEL_16_022110.c: looks up a word in a two-dimensional table of records and returns a field of the record it selects, or zero when the indices are out of range. */

typedef struct {
    char pad_00[0x10];
    int arr[11];
    int sel;
    char pad_40[0x14];
} Cell022110;

typedef struct {
    Cell022110 c[5];
} Entry022110;

extern Entry022110 D_001A01F8[];

int func_021D50(unsigned int a0, int a1)
{
    int v1;

    v1 = a1 + 1;
    if (a0 < 0x19U && v1 >= 0 && v1 < 6) {
        return D_001A01F8[a0].c[v1].arr[D_001A01F8[a0].c[v1].sel];
    }
    return 0;
}
