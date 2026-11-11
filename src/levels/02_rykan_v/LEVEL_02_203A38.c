/* LEVEL_02:0x203A38 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0021F7C0[1];
extern char D_00242AC0[];
extern int D_00242B08[];

struct Rec *func_203A38(void)
{
    struct Rec *record = D_0021F7C0;

    if (D_0021F7C0[0].a == 0) {
        if (record != 0) {
            record->a = D_00242AC0;
            record->b = D_00242B08;
        }
    }
    return D_0021F7C0;
}
