/* LEVEL_10:0x1F7CE0 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_002137D0[1];
extern char D_00234958[];
extern int D_002349C8[];

struct Rec *func_1F7CE0(void)
{
    struct Rec *record = D_002137D0;

    if (D_002137D0[0].a == 0) {
        if (record != 0) {
            record->a = D_00234958;
            record->b = D_002349C8;
        }
    }
    return D_002137D0;
}
