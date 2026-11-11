/* LEVEL_06:0x1DDB60 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001F96F0[1];
extern char D_002182D8[];
extern int D_00218358[];

struct Rec *func_1DDB60(void)
{
    struct Rec *record = D_001F96F0;

    if (D_001F96F0[0].a == 0) {
        if (record != 0) {
            record->a = D_002182D8;
            record->b = D_00218358;
        }
    }
    return D_001F96F0;
}
