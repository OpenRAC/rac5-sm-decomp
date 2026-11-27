/* LEVEL_01:0x1331C0 -- returns the word at +0xC0 of the current record, or 0xFFFFFFFF without one. */
struct Record {
    char pad[0xC0];
    unsigned int value;
};

extern struct Record *D_0020704C;

unsigned int func_1331C0(void)
{
    struct Record *record;

    record = D_0020704C;
    if (record == 0)
        return 0xFFFFFFFFu;
    return record->value;
}
