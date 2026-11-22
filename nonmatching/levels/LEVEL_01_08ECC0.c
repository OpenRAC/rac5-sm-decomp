/* USA LEVEL_01.REL:0x08ECC0, 668-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 15 differing words; first difference at 0x6C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;

extern Vec3 D_0020FFF0;
extern Vec3 D_001F62C8;
extern Vec3 D_001F62B8;
extern float D_001F6364;
extern char D_001F62D8;
extern char D_002406C0[];
extern char D_00240680[];
extern void MatrixMode(int) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void Ortho(float, float, float, float, float, float) __asm__("Ortho__Q34scee3Psp3Gumffffff");
extern void StoreMatrix(void *) __asm__("StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4");
extern void Perspective(float, float, float, float) __asm__("Perspective__Q34scee3Psp3Gumffff");
extern void UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");
extern void LookAt(Vec3 *, const Vec3 *, Vec3 *) __asm__("LookAt__Q34scee3Psp3GumPC14ScePspFVector3N21");
extern void func_08E828(Vec3 *);

int func_08ECC0(Vec3 *eye, int ortho, float size, float lift)
{
    Vec3 up;
    Vec3 look;
    Vec3 dflt;
    Vec3 blend;
    float w;
    float t;
    float u;

    up = D_0020FFF0;
    if (ortho) {
        up.x = 0.0f;
        up.y = 0.0f;
        up.z = 1.0f;
    }
    D_001F62C8 = *eye;
    MatrixMode(0);
    LoadIdentity();
    if (ortho) {
        w = size * 1.1f;
        Ortho(-w, w, -w, w, 0.1f, 1000.0f);
        StoreMatrix(D_002406C0);
    } else {
        Perspective(0.785f, 1.0f, 1.0f, 4.0f);
        StoreMatrix(D_002406C0);
        LoadIdentity();
        Perspective(0.785f, 1.0f, 1.0f, 100.0f);
    }
    UpdateMatrix();
    func_08E828(&look);
    if (ortho) {
        D_001F62B8.x = eye->x;
        D_001F62B8.y = eye->y + lift;
        D_001F62B8.z = eye->z;
    } else {
        t = D_001F6364;
        u = 1.0f - t;
        dflt = D_0020FFF0;
        blend.x = t * dflt.x + u * look.x;
        blend.y = t * dflt.y + u * look.y;
        blend.z = t * dflt.z + u * look.z;
        D_001F62B8.x = eye->x + blend.x * lift;
        D_001F62B8.y = eye->y + blend.y * lift;
        D_001F62B8.z = eye->z + blend.z * lift;
    }
    MatrixMode(1);
    LoadIdentity();
    LookAt(&D_001F62B8, eye, &up);
    StoreMatrix(D_00240680);
    UpdateMatrix();
    return D_001F62D8 = 1;
}
