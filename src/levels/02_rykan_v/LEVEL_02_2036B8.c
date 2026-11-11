/* LEVEL_02:0x2036B8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0021F740[1];
extern char D_00242A40[];
extern int D_00242B08[];

struct Rec *func_2036B8(void)
{
    struct Rec *record = D_0021F740;

    if (D_0021F740[0].a == 0) {
        if (record != 0) {
            record->a = D_00242A40;
            record->b = D_00242B08;
        }
    }
    return D_0021F740;
}
