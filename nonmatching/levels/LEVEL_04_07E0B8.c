/* USA LEVEL_04.REL:0x07E0B8, 316-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 4 differing words; first difference at 0x98.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float f_00;
    float f_04;
    float pairs[3][2];
} Obj;

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

void func_07E0B8(Obj *o)
{
    int i;
    float a;
    float c;
    float s;

    for (i = 0; i < 3; i++) {
        o->pairs[i][0] = (float)rand() * 4.6566123e-10f;
        o->pairs[i][1] = (float)rand() * 4.6566123e-10f;
    }
    a = (float)rand() * 4.656613e-10f * 6.2831855f + -3.1415927f;
    c = cosf(a);
    s = __builtin_sqrtf(1.0f - c * c);
    if (a < 0.0f)
        s = -s;
    o->f_00 = c;
    o->f_04 = s;
}
