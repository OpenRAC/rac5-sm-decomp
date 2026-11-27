/* LEVEL_22:0x10A690 -- placement copy of LEVEL_01_1331C0.c: returns the word at +0xC0 of the current record, or 0xFFFFFFFF without one. */
struct Record {
    char pad[0xC0];
    unsigned int value;
};

extern struct Record *D_0016602C;

unsigned int func_10A690(void)
{
    struct Record *record;

    record = D_0016602C;
    if (record == 0)
        return 0xFFFFFFFFu;
    return record->value;
}
