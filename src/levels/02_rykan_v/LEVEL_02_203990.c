/* LEVEL_02:0x203990 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0021F7A8[1];
extern char D_00242AA8[];
extern int D_00242B08[];

struct Rec *func_203990(void)
{
    struct Rec *record = D_0021F7A8;

    if (D_0021F7A8[0].a == 0) {
        if (record != 0) {
            record->a = D_00242AA8;
            record->b = D_00242B08;
        }
    }
    return D_0021F7A8;
}
