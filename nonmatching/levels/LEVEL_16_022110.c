/* LEVEL_16.REL:0x022110: reviewed 92-byte candidate, held for ABI review.
 * Looks up a word in a two-dimensional table of records and returns a field of
 * the record it selects, or zero when the indices are out of range.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It defines the function returning int with (int, int), but the accepted
 * caller LEVEL_16_0229B0.c declares it returning pointer with (int, int).
 * It defines the function returning int with (int, int), but the accepted
 * caller LEVEL_16_022A90.c declares it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad_00[0x10];
    int arr[11];
    int sel;
    char pad_40[0x14];
} Cell022110;

typedef struct {
    Cell022110 c[5];
} Entry022110;

extern Entry022110 D_0019F078[];

int func_022110(unsigned int a0, int a1)
{
    int v1;

    v1 = a1 + 1;
    if (a0 < 0x19U && v1 >= 0 && v1 < 6) {
        return D_0019F078[a0].c[v1].arr[D_0019F078[a0].c[v1].sel];
    }
    return 0;
}
