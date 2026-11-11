/* LEVEL_15:0x143788 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0015F1F0[1];
extern char D_00173680[];
extern int D_00173738[];

struct Rec *func_143788(void)
{
    struct Rec *record = D_0015F1F0;

    if (D_0015F1F0[0].a == 0) {
        if (record != 0) {
            record->a = D_00173680;
            record->b = D_00173738;
        }
    }
    return D_0015F1F0;
}
