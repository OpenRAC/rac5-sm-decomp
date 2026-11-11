/* LEVEL_09:0x1D88C0 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001F4478[1];
extern char D_00212CB8[];
extern int D_00212D78[];

struct Rec *func_1D88C0(void)
{
    struct Rec *record = D_001F4478;

    if (D_001F4478[0].a == 0) {
        if (record != 0) {
            record->a = D_00212CB8;
            record->b = D_00212D78;
        }
    }
    return D_001F4478;
}
