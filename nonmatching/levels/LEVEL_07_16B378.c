/* USA LEVEL_07.REL:0x16B378, 312-byte candidate (21 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x90.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0x18];
    float f18;
    float f1C;
} Res16B378;

extern unsigned int D_002AD6C0[];
extern char D_0021B940[];
extern char D_0021B988[];
extern int D_0021B980;
extern int D_0021B9C8;
extern Res16B378 *D_0021B9D0;
extern Res16B378 *D_0021B9D4;
extern Res16B378 *D_0021B9CC;

extern void func_0F0548(int index);
extern void func_1F6CC8(char *dst, unsigned int key);
extern int func_1F6D80(unsigned int key);
extern Res16B378 *func_12D068(unsigned int hash);

void func_16B378(void)
{
    unsigned int key;

    func_0F0548(3);
    key = (D_002AD6C0[0] << 16) | 0xA0007045;
    func_1F6CC8(D_0021B940, key);
    D_0021B980 = func_1F6D80(key);
    key = (D_002AD6C0[6] << 16) | 0xA0007045;
    func_1F6CC8(D_0021B988, key);
    D_0021B9C8 = func_1F6D80(key);
    D_0021B9D0 = func_12D068(0x9337BA59);
    if (D_0021B9D0) {
        D_0021B9D0->f18 = 34.0f;
        D_0021B9D0->f1C = 39.0f;
    }
    D_0021B9D4 = func_12D068(0x0E4E7602);
    if (D_0021B9D4) {
        D_0021B9D4->f18 = 34.0f;
        D_0021B9D4->f1C = 39.0f;
    }
    D_0021B9CC = func_12D068(0xFF1208D1);
    if (D_0021B9CC) {
        D_0021B9CC->f18 = 34.0f;
        D_0021B9CC->f1C = 39.0f;
    }
}
