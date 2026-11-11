/* LEVEL_08:0x237730 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00254370[1];
extern char D_0027A7F8[];
extern int D_0027A888[];

struct Rec *func_237730(void)
{
    struct Rec *record = D_00254370;

    if (D_00254370[0].a == 0) {
        if (record != 0) {
            record->a = D_0027A7F8;
            record->b = D_0027A888;
        }
    }
    return D_00254370;
}
