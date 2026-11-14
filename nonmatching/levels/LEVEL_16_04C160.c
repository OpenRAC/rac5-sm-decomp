/* USA LEVEL_16.REL:0x04C160, 196-byte candidate (14 November 2026).
 * Measured pinned: 15 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct V4 {
    float x;
    float y;
    float z;
    float w;
};

struct Src {
    struct V4 v;
    float f10;
};

extern float D_001A22F4;
extern float D_001A22F8;
extern float D_001A22FC;
extern void func_044178(char *a);

void func_04C160(char *a0)
{
    struct Src *src;
    struct V4 tmp;
    float x;

    src = (struct Src *)(a0 + 0xC0);
    if (src != 0) {
        x = src->f10;
        tmp = src->v;
        if (x != 0.0f) {
            *(struct V4 *)(a0 + 0x210) = tmp;
            x = 1.0f;
        }
        *(float *)(a0 + 0x240) = x * 0.08f;
        *(float *)(a0 + 0x26C) = x;
    }
    *(float *)(a0 + 0x230) = D_001A22F4;
    *(float *)(a0 + 0x234) = D_001A22F8;
    *(float *)(a0 + 0x238) = D_001A22FC;
    func_044178(a0);
}
