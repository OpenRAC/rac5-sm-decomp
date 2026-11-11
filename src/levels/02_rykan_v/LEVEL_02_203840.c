/* LEVEL_02:0x203840 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0021F778[1];
extern char D_00242A78[];
extern int D_00242B08[];

struct Rec *func_203840(void)
{
    struct Rec *record = D_0021F778;

    if (D_0021F778[0].a == 0) {
        if (record != 0) {
            record->a = D_00242A78;
            record->b = D_00242B08;
        }
    }
    return D_0021F778;
}
