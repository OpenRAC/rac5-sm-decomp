/* LEVEL_08:0x237650 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00254350[1];
extern char D_0027A7D8[];
extern int D_0027A888[];

struct Rec *func_237650(void)
{
    struct Rec *record = D_00254350;

    if (D_00254350[0].a == 0) {
        if (record != 0) {
            record->a = D_0027A7D8;
            record->b = D_0027A888;
        }
    }
    return D_00254350;
}
