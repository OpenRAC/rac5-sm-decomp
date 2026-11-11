/* LEVEL_03:0x207270 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00223708[1];
extern char D_00246400[];
extern int D_00246488[];

struct Rec *func_207270(void)
{
    struct Rec *record = D_00223708;

    if (D_00223708[0].a == 0) {
        if (record != 0) {
            record->a = D_00246400;
            record->b = D_00246488;
        }
    }
    return D_00223708;
}
