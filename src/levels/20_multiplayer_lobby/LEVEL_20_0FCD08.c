/* LEVEL_20:0x0FCD08 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00120A70[1];
extern char D_00131BD8[];
extern int D_00131C78[];

struct Rec *func_0FCD08(void)
{
    struct Rec *record = D_00120A70;

    if (D_00120A70[0].a == 0) {
        if (record != 0) {
            record->a = D_00131BD8;
            record->b = D_00131C78;
        }
    }
    return D_00120A70;
}
