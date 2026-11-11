/* LEVEL_08:0x237810 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00254390[1];
extern char D_0027A818[];
extern int D_0027A888[];

struct Rec *func_237810(void)
{
    struct Rec *record = D_00254390;

    if (D_00254390[0].a == 0) {
        if (record != 0) {
            record->a = D_0027A818;
            record->b = D_0027A888;
        }
    }
    return D_00254390;
}
