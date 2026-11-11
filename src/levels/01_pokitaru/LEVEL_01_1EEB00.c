/* LEVEL_01:0x1EEB00 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0020A810[1];
extern char D_0022B560[];
extern int D_0022B608[];

struct Rec *func_1EEB00(void)
{
    struct Rec *record = D_0020A810;

    if (D_0020A810[0].a == 0) {
        if (record != 0) {
            record->a = D_0022B560;
            record->b = D_0022B608;
        }
    }
    return D_0020A810;
}
