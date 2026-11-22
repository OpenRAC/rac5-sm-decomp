/* USA LEVEL_01.REL:0x0D0EC0, 316-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_002045B4;
extern int D_002045B8;
extern char D_002045BC;
extern int D_002034A0;
extern int D_0032CAA0;
extern char D_0032C9A0[];
extern char D_00214468[];

extern char *func_0D83F8(char *a0);
extern char *func_024670(int a0, int a1);
extern int func_0CF4A0(char *a0);
extern int func_0CF4E0(char *a0);
extern int func_10F448(char *a0);
extern int func_0D0E28(int a0, int a1);

void func_0D0EC0(void)
{
    char *obj;
    char *rec;

    D_002045B8 = D_002045B4 = 0;
    obj = func_0D83F8(D_0032C9A0);
    if (obj == 0) {
        return;
    }
    if (*(int *)(obj + 0x14) == D_002034A0) {
        return;
    }
    rec = func_024670(*(int *)(obj + 0x14), -1);
    if (rec == 0) {
        return;
    }
    if (func_0CF4A0(obj) != 0) {
        D_002045BC = 1;
        if (func_0CF4E0(obj) != 0) {
            D_002045B4 = 0x0B3B7040;
            D_002045B8 = 0x13AF245F;
        } else {
            D_002045B4 = func_10F448(D_00214468);
            D_002045B8 = *(int *)(rec + 0x40);
        }
    } else {
        if (*(int *)(rec + 0x4C) != 0 && *(int *)(rec + 0x48) != 0) {
            D_002045B4 = *(int *)(rec + 0x48);
            D_002045B8 = *(int *)(rec + 0x4C);
        } else {
            D_002045B4 = *(int *)rec;
            D_002045B8 = *(int *)(rec + 4);
        }
        D_002045BC = 0;
    }
    if (func_0D0E28(D_002045B4, D_002045B8) == 0) {
        D_0032CAA0 = 0;
    }
}
