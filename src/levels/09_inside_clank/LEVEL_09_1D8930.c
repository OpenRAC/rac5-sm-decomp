/* LEVEL_09:0x1D8930 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001F4488[1];
extern char D_00212CC8[];
extern int D_00212D78[];

struct Rec *func_1D8930(void)
{
    struct Rec *record = D_001F4488;

    if (D_001F4488[0].a == 0) {
        if (record != 0) {
            record->a = D_00212CC8;
            record->b = D_00212D78;
        }
    }
    return D_001F4488;
}
