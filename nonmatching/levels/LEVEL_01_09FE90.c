/* USA LEVEL_01.REL:0x09FE90, 372-byte candidate (21 November 2026).
 * Measured gnu-ee-trial --as: 1 differing words; first difference at 0x174.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Pad_09FE90 {
    unsigned char motor[2];
    char pad2[0x0A];
    float level;
    float imp_a;
    float imp_b;
    char pad18[0x104];
};

struct Config_09FE90 {
    char pad0[0x44];
    int vibration;
};

extern struct Pad_09FE90 D_0029C688[];
extern struct Config_09FE90 *D_001F3FAC;

extern void func_087E58(unsigned int port);
extern int func_01A868(int a0);
extern int scePadGetState(int port, int slot);
extern int scePadSetActDirect(int port, int slot, unsigned char *data);
extern float fabsf(float x);

static __inline__ float *MaxRef(float *a, float *b)
{
    return *a > *b ? a : b;
}

static __inline__ float *MinRef(float *a, float *b)
{
    return *a < *b ? a : b;
}

static __inline__ int NearZero(float x, float eps)
{
    return fabsf(x) <= eps;
}

void func_09FE90(void)
{
    unsigned int i;
    struct Pad_09FE90 *p;
    float level;
    float v;
    float one;

    for (i = 0; i < 2; i++) {
        p = &D_0029C688[i];
        level = 0.0f;
        func_087E58(i);
        if (scePadGetState(i, 0) == 6) {
            p->motor[1] = 0;
            p->motor[0] = 0;
            v = *MaxRef(&p->imp_a, &p->imp_b) / 10.0f;
            one = 1.0f;
            level = *MinRef(&v, &one);
            if (D_001F3FAC->vibration != 0 && !(unsigned char)NearZero(level, 0.01f) && func_01A868(6) == 0) {
                p->motor[0] = 0;
                p->motor[1] = (int)(level * 255.0f);
            }
            scePadSetActDirect(i, 0, p->motor);
        }
        p->level = level;
        p->imp_a = 0.0f;
        p->imp_b = 0.0f;
    }
    func_087E58(0);
}
