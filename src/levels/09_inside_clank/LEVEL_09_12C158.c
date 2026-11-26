/* LEVEL_09:0x12C158 -- placement copy of LEVEL_01_1331C0.c: returns the word at +0xC0 of the current record, or 0xFFFFFFFF without one. */
struct Record {
    char pad[0xC0];
    unsigned int value;
};

extern struct Record *D_001F0B4C;

unsigned int func_12C158(void)
{
    struct Record *record;

    record = D_001F0B4C;
    if (record == 0)
        return 0xFFFFFFFFu;
    return record->value;
}
