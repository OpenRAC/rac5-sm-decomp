/* LEVEL_15.REL:0x1364E8: reviewed 496-byte candidate, held for ABI review.
 * Advances a countdown and, once expired, turns a pad direction into a clamped
 * stick vector.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 496/496 bytes and is byte-
 * exact at this and 1 other USA placement, but the prototypes disagree.
 * It declares func_06C590 returning pointer with (int), but the accepted
 * LEVEL_15_06C590.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float sqrtf(float x);
extern float fabsf(float x);

typedef struct {
    char pad0[0x120];
    int w120;
    int w124;
    float f128;
    float f12C;
    float f130;
    char pad1[4];
    float f138;
} Ctl;

typedef struct {
    char pad0[4];
    int bits;
    char pad1[0x2C];
    float f34;
} Pad;

typedef struct {
    char pad0[8];
    unsigned w8;
} Cfg;

extern Ctl D_002F4F88;
extern Cfg *D_00148C2C;

extern int func_06C668(int n);
extern Pad *func_06C590(int n);
extern float func_06C878(Pad *p);
extern int func_06C938(int bits);
extern int func_06C970(int bits);

void func_1364E8(void)
{
    int bits;
    Pad *pad;
    int done;
    float sx;
    float sy;
    float dx;
    float dy;
    float len2;
    float len;
    float inv;
    float m;
    float a;
    float b;

    D_002F4F88.f138 = D_002F4F88.f138 - 1.0f;
    D_002F4F88.w124 = func_06C668(2);
    pad = func_06C590(2);
    bits = pad->bits;
    D_002F4F88.w120 = bits;
    if (D_00148C2C->w8 & 1)
        sx = 1.0f;
    else
        sx = -1.0f;
    D_002F4F88.f130 = 0;
    done = D_002F4F88.f138 <= D_002F4F88.f130;
    if ((unsigned char)done) {
        dx = func_06C878(pad);
        dy = pad->f34;
        if (func_06C938(bits))
            dx = -1.0f;
        else if (func_06C970(bits))
            dx = 1.0f;
        if (bits & 0x10)
            dy = -1.0f;
        else if (bits & 0x40)
            dy = 1.0f;
        sy = sx * dy;
        dy = -dx;
        len2 = dy * dy + sy * sy;
        if (len2 > 1.0000001111620804e-06f) {
            len = sqrtf(len2);
            inv = 1.0f / len;
            a = 1.0f - len;
            b = len + 1.0f;
            m = (b - fabsf(a)) * 0.5f;
            D_002F4F88.f128 = dy * inv;
            D_002F4F88.f12C = sy * inv;
            D_002F4F88.f130 = m;
        }
    }
}
