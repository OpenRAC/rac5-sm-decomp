/* LEVEL_03:0x2073F8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00223740[1];
extern char D_00246438[];
extern int D_00246488[];

struct Rec *func_2073F8(void)
{
    struct Rec *record = D_00223740;

    if (D_00223740[0].a == 0) {
        if (record != 0) {
            record->a = D_00246438;
            record->b = D_00246488;
        }
    }
    return D_00223740;
}
