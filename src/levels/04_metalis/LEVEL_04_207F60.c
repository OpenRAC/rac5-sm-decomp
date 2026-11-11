/* LEVEL_04:0x207F60 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00224188[1];
extern char D_00245DD0[];
extern int D_00245E18[];

struct Rec *func_207F60(void)
{
    struct Rec *record = D_00224188;

    if (D_00224188[0].a == 0) {
        if (record != 0) {
            record->a = D_00245DD0;
            record->b = D_00245E18;
        }
    }
    return D_00224188;
}
