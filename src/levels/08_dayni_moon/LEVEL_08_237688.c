/* LEVEL_08:0x237688 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00254358[1];
extern char D_0027A7E0[];
extern int D_0027A888[];

struct Rec *func_237688(void)
{
    struct Rec *record = D_00254358;

    if (D_00254358[0].a == 0) {
        if (record != 0) {
            record->a = D_0027A7E0;
            record->b = D_0027A888;
        }
    }
    return D_00254358;
}
