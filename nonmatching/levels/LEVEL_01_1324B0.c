/* USA LEVEL_01.REL:0x1324B0 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_0C0B18.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char *f0;
    char pad4[4];
    unsigned char f8;
    char pad9[3];
    unsigned char fC;
    char padD[3];
    unsigned int f10;
    unsigned char f14;
    unsigned char f15;
    unsigned char f16;
} Tbl;
extern Tbl D_00387D20;
extern char D_00206FF0[];
extern char D_00207000[];
extern char D_00207010[];
extern char D_00207038[];
extern int func_132730(Tbl *t, int a);

char *func_1324B0(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_00206FF0;
    if (D_00387D20.f8 == 0)
        return D_00207010;
    if (D_00387D20.f10 == 0 || func_132730(&D_00387D20, D_00387D20.fC) == 0)
        return D_00207000;
    if (D_00387D20.f16 != 0) {
        if (key < 0)
            return D_00207038;
        key = -key;
    }
    p = D_00387D20.f0;
    if (D_00387D20.f14)
        p += 4;
    for (i = 0; i < D_00387D20.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_00387D20.f15)
            p += 12;
        else
            p += 8;
        if (D_00387D20.f14)
            p += 4;
    }
    return D_00206FF0;
}
