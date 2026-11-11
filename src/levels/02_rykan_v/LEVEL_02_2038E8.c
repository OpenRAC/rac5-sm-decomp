/* LEVEL_02:0x2038E8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0021F790[1];
extern char D_00242A90[];
extern int D_00242B08[];

struct Rec *func_2038E8(void)
{
    struct Rec *record = D_0021F790;

    if (D_0021F790[0].a == 0) {
        if (record != 0) {
            record->a = D_00242A90;
            record->b = D_00242B08;
        }
    }
    return D_0021F790;
}
