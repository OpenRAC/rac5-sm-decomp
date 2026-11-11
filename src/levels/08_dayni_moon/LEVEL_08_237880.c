/* LEVEL_08:0x237880 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_002543A0[1];
extern char D_0027A828[];
extern int D_0027A888[];

struct Rec *func_237880(void)
{
    struct Rec *record = D_002543A0;

    if (D_002543A0[0].a == 0) {
        if (record != 0) {
            record->a = D_0027A828;
            record->b = D_0027A888;
        }
    }
    return D_002543A0;
}
