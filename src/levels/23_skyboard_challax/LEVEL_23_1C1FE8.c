/* LEVEL_23:0x1C1FE8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001DDA98[1];
extern char D_001F89F8[];
extern int D_001F8A88[];

struct Rec *func_1C1FE8(void)
{
    struct Rec *record = D_001DDA98;

    if (D_001DDA98[0].a == 0) {
        if (record != 0) {
            record->a = D_001F89F8;
            record->b = D_001F8A88;
        }
    }
    return D_001DDA98;
}
