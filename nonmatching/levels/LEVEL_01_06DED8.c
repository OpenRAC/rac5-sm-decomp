/* LEVEL_01.REL:0x06DED8: reviewed 172-byte candidate.
 * pinned C with gnu-ee-trial links 172 bytes; first differs at +60.
 * Retry: Recover the source field initialization order and parameter lifetimes that
 * retain the retail post-call store schedule.
 * No matching credit.
 */
extern void func_0974A8(void *, int, int);

typedef struct RecordHead {
    char pad_00[0x14];
    int field14;
    int field18;
    int field1C;
} RecordHead;

void func_06DED8(char *record, char *source, int value2, int value3,
                 int value4)
{
    float zero_float;

    func_0974A8(record, *(int *)(source + 0x10), 0);
    ((RecordHead *)record)->field18 = value3;
    ((RecordHead *)record)->field1C = value4;
    ((RecordHead *)record)->field14 = value2;
    *(int *)(record + 0x24) = 0;
    *(char **)(record + 0x20) = source;
    record[0x33] = -1;
    record[0x34] = 1;
    record[0x30] = 0;
    record[0x31] = 1;
    record[0x32] = 0;
    record[0x35] = 0;
    zero_float = *(float *)(record + 0x24);
    *(float *)(record + 0x28) = zero_float;
    record[0x38] = source[0];
    record[0x37] = 0;
    record[0x36] = 0;
    *(float *)(record + 0x2C) = zero_float;
}
