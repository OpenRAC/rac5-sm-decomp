/* USA LEVEL_01.REL:0x0C87B0, 348-byte candidate (21 November 2026).
 * Measured pinned: 29 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct S;

extern unsigned int D_00200B9C;
extern unsigned char D_00200BB0;

extern int func_132DE0(int unused);
extern void func_135710(char *record);
extern unsigned char func_133910(unsigned int slot);
extern int func_132BF8(int a0);
extern void func_1356C8(struct S *p, int v);
extern int func_132ED8(void);
extern void func_1356E0(int *p, int a1);
extern int func_133730(void);
extern int func_132EF8(void);
extern unsigned int func_132E00(void);

void func_0C87B0(int *p)
{
    unsigned char sel;

    if (func_132DE0(0) == 0) {
        func_135710((char *)p);
        return;
    }
    sel = func_133910(D_00200B9C);
    if (func_132BF8(1) != 0) {
        func_1356C8((struct S *)p, 0x1C);
    } else if (((int (*)(int))func_132ED8)(0) == 0) {
        func_1356E0(p, 9);
    } else if (func_133730() == 0) {
        if (D_00200BB0 != 0)
            func_1356E0(p, 0x17);
        else
            func_1356E0(p, 0xE);
    } else if (func_132EF8() != 0) {
        func_1356E0(p, 0xB);
    } else if (((unsigned int (*)(int))func_132E00)(0) == 0) {
        func_1356E0(p, 7);
    } else if (sel == 1) {
        func_1356E0(p, 2);
    } else if (sel == 0 || sel == 0xFF) {
        func_1356E0(p, 3);
    } else {
        func_135710((char *)p);
    }
}
