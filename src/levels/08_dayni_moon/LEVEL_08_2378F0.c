/* LEVEL_08:0x2378F0 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_002543B0[1];
extern char D_0027A838[];
extern int D_0027A888[];

struct Rec *func_2378F0(void)
{
    struct Rec *record = D_002543B0;

    if (D_002543B0[0].a == 0) {
        if (record != 0) {
            record->a = D_0027A838;
            record->b = D_0027A888;
        }
    }
    return D_002543B0;
}
