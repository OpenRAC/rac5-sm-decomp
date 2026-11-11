/* LEVEL_10:0x1F7C70 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_002137C0[1];
extern char D_00234948[];
extern int D_002349C8[];

struct Rec *func_1F7C70(void)
{
    struct Rec *record = D_002137C0;

    if (D_002137C0[0].a == 0) {
        if (record != 0) {
            record->a = D_00234948;
            record->b = D_002349C8;
        }
    }
    return D_002137C0;
}
