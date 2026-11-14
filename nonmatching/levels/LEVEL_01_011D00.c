/* USA LEVEL_01.REL:0x011D00, 72-byte candidate (14 November 2026).
 * Measured pinned: 17 differing words; first difference at 8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern Vec4 D_0022F548;
extern float D_0022F510;
extern float D_0022F514;

void func_011D00(void)
{
    D_0022F548.y = 2.0f;
    D_0022F548.z = 7.0f;
    D_0022F548.w = 1.0f;
    D_0022F510 = D_0022F514 = D_0022F548.x = 0.0f;
}
