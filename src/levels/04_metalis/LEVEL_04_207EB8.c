/* LEVEL_04:0x207EB8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00224170[1];
extern char D_00245DB8[];
extern int D_00245E18[];

struct Rec *func_207EB8(void)
{
    struct Rec *record = D_00224170;

    if (D_00224170[0].a == 0) {
        if (record != 0) {
            record->a = D_00245DB8;
            record->b = D_00245E18;
        }
    }
    return D_00224170;
}
