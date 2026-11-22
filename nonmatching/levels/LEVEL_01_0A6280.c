/* USA LEVEL_01.REL:0x0A6280, 252-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x5C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Fade {
    char pad00[8];
    unsigned int alpha;
    unsigned int colour;
    char pad10[5];
    unsigned char active;
} Fade;

extern void *memset(void *, int, unsigned int);
extern void Gum_MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void Gum_StoreMatrix(void *m) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Gum_LoadMatrix(float *m) __asm__("LoadMatrix__Q34scee3Psp3GumPC7MATRIX4");
extern void Gum_UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

extern void func_0A9018(void);
extern void func_0A9400(void);
extern void func_0A53C0(int a, int b, int c, int d, unsigned int e, unsigned int f);

void func_0A6280(Fade *f)
{
    float m[16];
    float saved[16];

    if (f->alpha == 0) {
        return;
    }
    if (f->active == 0) {
        return;
    }
    func_0A9018();
    func_0A9400();
    memset(m, 0, 0x40);
    m[12] = 1792.0f;
    m[13] = 1840.0f;
    m[0] = 1.0f;
    m[5] = 1.0f;
    m[10] = 1.0f;
    m[15] = 1.0f;
    Gum_MatrixMode(5);
    Gum_StoreMatrix(saved);
    Gum_LoadMatrix(m);
    Gum_UpdateMatrix();
    func_0A53C0(0, 0, 0x200, 0x1A0, (f->colour & 0x00FFFFFF) | (f->alpha << 24), 0x00FFFFFF);
    Gum_LoadMatrix(saved);
    Gum_UpdateMatrix();
}
