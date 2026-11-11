/* FRONTEND:0x01FFC0 -- fills the menu string tables (names, descriptions, long texts) from the localisation lookups. */
typedef struct Tbl {
    char pad0[0x1B4];
    char (*name)[0x40];
    char (*desc)[0x40];
    char *text;
} Tbl;

typedef struct Menu {
    char pad0[0x3C];
    unsigned int f3c;
} Menu;

extern char D_001E5940[];
extern char D_001B7940[];
extern char D_00109BC8[];
extern char D_00109BE8[];
extern char D_0002FF98[];
extern Menu *D_00027E9C;
extern Tbl *D_0010BE50;

extern char *strncpy(char *d, const char *s, unsigned int n);
extern int func_01F700(char *a, unsigned int b, unsigned int c, unsigned int d);
extern int func_01F9A0(char *a, int b, int c);
extern void func_01F8E0(char *a, char *b);
extern char *func_01FDD0(int a, int b);
extern char *func_01FE90(int a);
extern char *func_01F778(int a);
extern int func_0033A0(int a);

void func_01FFC0(void)
{
    unsigned int f;
    unsigned int i;
    char *m = D_001E5940;

    f = 0;
    if (D_00027E9C != 0)
        f = D_00027E9C->f3c;
    func_01F700(m, D_001B7940, D_00109BC8, 0x2E000);
    if (func_01F9A0(m, f & 0xFF, 1) != 0)
        func_01F8E0(m, D_0002FF98);
    for (i = 1; i < 11; i++) {
        strncpy(D_0010BE50->name[i], func_01FDD0(i, 0), 0x40);
        strncpy(D_0010BE50->desc[i], func_01FE90(i), 0x40);
    }
    if (func_0033A0(0x17) != 0) {
        strncpy(D_0010BE50->name[6], func_01FDD0(0x17, 1), 0x40);
        strncpy(D_0010BE50->desc[6], D_00109BE8, 0x40);
    }
    strncpy(D_0010BE50->text + 0x0, func_01F778(0x6AE), 0x100);
    strncpy(D_0010BE50->text + 0x100, func_01F778(0x2FC), 0x100);
    strncpy(D_0010BE50->text + 0x200, func_01F778(0x2FA), 0x100);
    D_0010BE50->text[0xB00] = D_00109BE8[0];
    D_0010BE50->text[0x400] = D_00109BE8[0];
    strncpy(D_0010BE50->text + 0x800, func_01F778(0x6AF), 0x100);
    strncpy(D_0010BE50->text + 0x900, func_01F778(0x2FC), 0x100);
    strncpy(D_0010BE50->text + 0xA00, func_01F778(0x2FA), 0x100);
    D_0010BE50->text[0xB00] = D_00109BE8[0];
    D_0010BE50->text[0xC00] = D_00109BE8[0];
    strncpy(D_0010BE50->text + 0x1000, func_01F778(0x6B0), 0x100);
    strncpy(D_0010BE50->text + 0x1100, func_01F778(0x6B1), 0x100);
    strncpy(D_0010BE50->text + 0x1200, func_01F778(0x6B2), 0x100);
    strncpy(D_0010BE50->text + 0x1300, func_01F778(0x6B3), 0x100);
    strncpy(D_0010BE50->text + 0x1400, func_01F778(0x6B4), 0x100);
    strncpy(D_0010BE50->text + 0x1500, func_01F778(0x6AD), 0x100);
    D_0010BE50->text[0x1600] = D_00109BE8[0];
    strncpy(D_0010BE50->text + 0x2000, func_01F778(0x6B5), 0x100);
    strncpy(D_0010BE50->text + 0x2100, func_01F778(0x6B6), 0x100);
    strncpy(D_0010BE50->text + 0x2200, func_01F778(0x6B7), 0x100);
    strncpy(D_0010BE50->text + 0x2300, func_01F778(0x6B8), 0x100);
    strncpy(D_0010BE50->text + 0x2400, func_01F778(0x6B9), 0x100);
    strncpy(D_0010BE50->text + 0x2500, func_01F778(0x6AD), 0x100);
    D_0010BE50->text[0x2600] = D_00109BE8[0];
    strncpy(D_0010BE50->text + 0x3000, func_01F778(0x6BA), 0x100);
    strncpy(D_0010BE50->text + 0x3100, func_01F778(0x6BB), 0x100);
    strncpy(D_0010BE50->text + 0x3200, func_01F778(0x6BD), 0x100);
    D_0010BE50->text[0x3300] = D_00109BE8[0];
    strncpy(D_0010BE50->text + 0x4000, func_01F778(0x6BF), 0x100);
    strncpy(D_0010BE50->text + 0x4100, func_01F778(0x6C0), 0x100);
    strncpy(D_0010BE50->text + 0x4200, func_01F778(0x6C1), 0x100);
    strncpy(D_0010BE50->text + 0x4300, func_01F778(0x6C2), 0x100);
    strncpy(D_0010BE50->text + 0x4400, func_01F778(0x6C3), 0x100);
    D_0010BE50->text[0x4500] = D_00109BE8[0];
}
