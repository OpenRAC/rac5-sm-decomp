/* USA LEVEL_01.REL:0x0CC1B0, 452-byte candidate (22 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Row {
    int w0;
    unsigned int limit;
    int w8;
    int wC;
} Row;

typedef struct Menu {
    int w0;
    int w4;
    int sel;
} Menu;

extern unsigned char *D_001F3FAC;
extern unsigned int D_001F3FBC;
extern Menu D_0032C018;
extern Row D_00214098[];

extern unsigned int func_088020(int arg);
extern int func_0BA408(Menu *obj);
extern void func_134070(int a, int b);
extern int func_0D6A68(void);
extern void func_0B96A8(Menu *obj, unsigned int pad);
extern int func_0282D8(void);
extern void func_0B6020(int id);
extern void func_02A3A8(int id);
extern int func_0BCB20(void);
extern void func_01A828(int a, int b);
extern void func_0CC818(void);

void func_0CC1B0(void)
{
    unsigned int pad;
    int menu;
    int full;
    Row *row;
    unsigned int count;
    unsigned int u;
    unsigned char mask;
    unsigned char *p;
    unsigned char *base;

    pad = func_088020(0x6B10);
    count = 0;
    row = &D_00214098[D_0032C018.sel];
    base = D_001F3FAC + 0x8C0;
    u = 0x77;
    p = base + u;
    do {
        mask = 1;
        u++;
        do {
            if ((*p & mask) != 0) {
                count++;
            }
            mask = mask << 1;
        } while (mask != 0);
        p = base + u;
    } while (u < 0x7D);
    D_001F3FBC = count;
    full = !(count < row->limit);
    menu = func_0BA408(&D_0032C018);
    if (full) {
        func_134070(0, row->w8);
    } else {
        func_134070(0, 0xD);
    }
    if (func_0D6A68() != 0) {
        return;
    }
    if ((pad & 8) != 0) {
        func_0B6020(0);
        func_01A828(4, 0);
    } else if ((pad & 0x1000) != 0) {
        func_0B6020(0);
        if (func_0BCB20() == 0) {
            func_01A828(4, 0);
        }
    } else if ((pad & 0x4000) != 0) {
        if (menu != 0) {
            if (full && (func_0282D8() == 0 || row->wC != 0xE)) {
                func_0B6020(0xB);
                func_02A3A8(row->wC);
            } else {
                func_0B6020(0xC);
            }
        }
    } else {
        func_0B96A8(&D_0032C018, pad);
    }
    func_0CC818();
}
