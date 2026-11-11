/* LEVEL_18:0x0B8F20 -- placement copy of LEVEL_01_0CA9B8.c: appends a record to a counted table for small indices, with a second derived field for valid indices. */
typedef struct {
    char pad_00[0x54];
    int f_54;
    int f_58;
    char pad_5C[0x68 - 0x5C];
    char *f_68;
} Elem;

extern int D_001B058C;
extern Elem D_001B0840[];
extern char D_001B0700[];

void func_0B8F20(int a0)
{
    Elem *e;
    int cnt;

    cnt = D_001B058C;
    e = &D_001B0840[cnt];
    if (a0 < 4) {
        e->f_58 = a0;
        e->f_54 = 2;
        if (a0 == -1) {
            e->f_68 = 0;
        } else {
            e->f_68 = D_001B0700 + cnt * 160 + a0 * 40;
        }
    }
}
