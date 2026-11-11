/* LEVEL_21:0x143A28 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0015F250[1];
extern char D_001736E0[];
extern int D_00173738[];

struct Rec *func_143A28(void)
{
    struct Rec *record = D_0015F250;

    if (D_0015F250[0].a == 0) {
        if (record != 0) {
            record->a = D_001736E0;
            record->b = D_00173738;
        }
    }
    return D_0015F250;
}
