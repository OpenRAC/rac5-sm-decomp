/* LEVEL_04:0x13F640 -- placement copy of LEVEL_01_1331C0.c: returns the word at +0xC0 of the current record, or 0xFFFFFFFF without one. */
struct Record {
    char pad[0xC0];
    unsigned int value;
};

extern struct Record *D_0022046C;

unsigned int func_13F640(void)
{
    struct Record *record;

    record = D_0022046C;
    if (record == 0)
        return 0xFFFFFFFFu;
    return record->value;
}
