/* LEVEL_24:0x0C4280 -- placement copy of LEVEL_01_0CA9B8.c: appends a record to a counted table for small indices, with a second derived field for valid indices. */
typedef struct {
    char pad_00[0x54];
    int f_54;
    int f_58;
    char pad_5C[0x68 - 0x5C];
    char *f_68;
} Elem;

extern int D_001D1EE4;
extern Elem D_001D2198[];
extern char D_001D2058[];

void func_0C4280(int a0)
{
    Elem *e;
    int cnt;

    cnt = D_001D1EE4;
    e = &D_001D2198[cnt];
    if (a0 < 4) {
        e->f_58 = a0;
        e->f_54 = 2;
        if (a0 == -1) {
            e->f_68 = 0;
        } else {
            e->f_68 = D_001D2058 + cnt * 160 + a0 * 40;
        }
    }
}
