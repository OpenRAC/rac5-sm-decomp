/* USA LEVEL_08:001458, 280-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial-divpad, assembler gnu-ee-trial; options: default.
 * Compiled 288 bytes: 15 differing words; first difference +0x5C. No matching credit.
 * Remaining issue: division padding only: storing s before c fixes the swc1 0x100/0x104 order
 * (17->15 words); retail pads the sqrt.s after sub.s with two nops but the div.s whose divisor
 * was just loaded with none (the CAMERA_SetFovX pattern in matching-blockers.md); divpad pads
 * both (288 B), pinned/gnu-ee-trial/sdk pad neither (268-272 B)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_08:0x001458 -- updates a cached half-angle cosine/sine pair when an angle changes. */
typedef struct {
    char pad0[0xF4];
    float angle;
    char padF8[8];
    float c;
    float s;
    float t;
} S;
extern S *D_00237DC8;
extern float cosf(float x);
extern float sqrtf(float x);

void func_001458(float a)
{
    float h, c, s;
    S *p;
    int same;

    p = D_00237DC8;
    same = __builtin_fabsf(a - p->angle) <= 0.00001f;
    if (!(same & 0xFF)) {
        h = a * 0.5f;
        c = cosf(h);
        s = sqrtf(1.0f - c * c);
        if (h < 0.0f)
            s = -s;
        p->s = s;
        p->c = c;
        D_00237DC8->t = D_00237DC8->s / D_00237DC8->c;
    }
    D_00237DC8->angle = a;
}
