/* LEVEL_04:0x207C18 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00224110[1];
extern char D_00245D58[];
extern int D_00245E18[];

struct Rec *func_207C18(void)
{
    struct Rec *record = D_00224110;

    if (D_00224110[0].a == 0) {
        if (record != 0) {
            record->a = D_00245D58;
            record->b = D_00245E18;
        }
    }
    return D_00224110;
}
