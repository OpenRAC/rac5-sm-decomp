/* LEVEL_10:0x131020 -- placement copy of LEVEL_01_1331C0.c: returns the word at +0xC0 of the current record, or 0xFFFFFFFF without one. */
struct Record {
    char pad[0xC0];
    unsigned int value;
};

extern struct Record *D_0020FCAC;

unsigned int func_131020(void)
{
    struct Record *record;

    record = D_0020FCAC;
    if (record == 0)
        return 0xFFFFFFFFu;
    return record->value;
}
