/* USA LEVEL_02:0x1D9670, 40 retail bytes.
 * Pinned C links to 36 bytes; first difference at body byte
 * 2. This is a publishable source hypothesis, not a match.
 * Recover the indexed record's separate +4 subrecord address and output-
 * register lifetime.
 * This source is uncounted.
 */
struct Record_1D9670 {
    int unused;
    int first;
    int second;
    int padding;
};

void func_1D9670(char *object, unsigned int index, int *out)
{
    struct Record_1D9670 *records = *(struct Record_1D9670 **)(object + 0x54);
    struct Record_1D9670 *record = &records[index & 0xFFu];
    out[0] = record->first;
    out[2] = record->second;
}
