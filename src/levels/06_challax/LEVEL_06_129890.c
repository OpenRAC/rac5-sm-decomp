/* LEVEL_06:0x129890 -- placement copy of LEVEL_01_1331C0.c: returns the word at +0xC0 of the current record, or 0xFFFFFFFF without one. */
struct Record {
    char pad[0xC0];
    unsigned int value;
};

extern struct Record *D_001F5C4C;

unsigned int func_129890(void)
{
    struct Record *record;

    record = D_001F5C4C;
    if (record == 0)
        return 0xFFFFFFFFu;
    return record->value;
}
