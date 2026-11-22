/* USA LEVEL_06.REL:0x1830D8, 384-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 14 differing words; first difference at 0xA0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float cosf(float x);
extern float floorf(float x);
extern float sqrtf(float x);
extern int rand(void);

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Rec {
    unsigned int w0;
    Vec3 a;
    Vec3 b;
    float f1C;
    float sn;
    float cs;
    float f28;
} Rec;

extern Rec *func_090338(int *out, int handle, int flag);

void func_1830D8(int handle, Vec3 *a, Vec3 *b, float value)
{
    int ok;
    Rec *r;
    float angle;
    float t;
    float cs;
    float sn;

    r = func_090338(&ok, handle, 1);
    if (ok != 0) {
        r->f1C = value;
        r->w0 = 0xFFFFFFCCu;
        r->a = *a;
        r->b = *b;
        r->f28 = 90.0f;
        angle = (float)rand();
        angle = angle * 4.656613e-10f * 6.2831855f + -3.1415927f;
        t = floorf(angle * 0.15915494f + 0.5f);
        angle = angle - t * 6.2831855f;
        cs = cosf(angle);
        sn = sqrtf(1.0f - cs * cs);
        if (angle < 0.0f) {
            sn = -sn;
        }
        r->sn = sn;
        r->cs = cs;
    }
}
