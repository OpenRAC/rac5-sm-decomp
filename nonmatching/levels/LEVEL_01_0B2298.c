/* USA LEVEL_01.REL:0x0B2298, 136-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 4 differing words; first difference at 0x48.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned int func_0B2288(void);
extern int D_001FC1B4;
extern int D_001FC1BC;
extern float D_001FC1C0;
extern float D_001FC1C4;
extern unsigned char D_001FC258;

static inline float *MaxRef(float *a, float *b)
{
    if (*a < *b) {
        return b;
    }
    return a;
}

static inline float Clamp0(float *amount)
{
    float zero = 0.0f;

    return *MaxRef(&zero, amount);
}

void func_0B2298(int owner, unsigned char flag, float value, float amount)
{
    func_0B2288();
    D_001FC1B4 = flag;
    D_001FC1BC = owner;
    D_001FC1C0 = value;
    D_001FC1C4 = Clamp0(&amount);
    D_001FC258 = 0;
}
