/* LEVEL_06:0x1DDB28 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001F96E8[1];
extern char D_002182D0[];
extern int D_00218358[];

struct Rec *func_1DDB28(void)
{
    struct Rec *record = D_001F96E8;

    if (D_001F96E8[0].a == 0) {
        if (record != 0) {
            record->a = D_002182D0;
            record->b = D_00218358;
        }
    }
    return D_001F96E8;
}
