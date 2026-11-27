/* USA LEVEL_01:0A6280, 252-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 252 bytes: 2 differing words; first difference +0x68. No matching credit.
 * Remaining issue: same shape as FRONTEND:00ADF0 (Gum names): inline SetXY writing y first fixes
 * the f1/f2 swap (4 -> 2 words); left: the m[15] store is scheduled ahead of the m[12]/m[13]
 * stores; 120 orders measured
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x0A6280 -- when the fade record is active, draws its full-screen fade rectangle under a screen-space matrix: saves the current matrix, loads an identity-plus-offset matrix, draws, then restores the saved matrix. */
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

static __inline__ void SetXY(float *m, float x, float y)
{
    m[13] = y;
    m[12] = x;
}

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
    m[0] = 1.0f;
    m[5] = 1.0f;
    m[10] = 1.0f;
    m[15] = 1.0f;
    SetXY(m, 1792.0f, 1840.0f);
    Gum_MatrixMode(5);
    Gum_StoreMatrix(saved);
    Gum_LoadMatrix(m);
    Gum_UpdateMatrix();
    func_0A53C0(0, 0, 0x200, 0x1A0, (f->colour & 0x00FFFFFF) | (f->alpha << 24), 0x00FFFFFF);
    Gum_LoadMatrix(saved);
    Gum_UpdateMatrix();
}
