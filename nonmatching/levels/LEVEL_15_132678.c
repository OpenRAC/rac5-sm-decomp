/* USA LEVEL_15.REL:0x132678, 156-byte candidate (14 November 2026).
 * Measured pinned: 11 differing words; first difference at +0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Blk18 {
    unsigned long long a;
    unsigned long long b;
    unsigned long long c;
};

struct Blk0C {
    unsigned int a;
    unsigned int b;
    unsigned int c;
};

extern char D_002F3D38[];
extern float D_0015DFA0[];
extern void func_000CF8(float f0, float f1);
extern void FOG_SetProperties(unsigned int a0, float f1, float f2, unsigned int a3, float f4) __asm__("FOG_SetProperties__FUiffUif");
extern void func_014B38(unsigned int a0);

void func_132678(void)
{
    char *s;

    s = D_002F3D38 - 0x18;
    *(struct Blk18 *)D_002F3D38 = *(struct Blk18 *)s;
    *(struct Blk0C *)(s + 0x3C) = *(struct Blk0C *)(s + 0x30);

    func_000CF8(5.0f, 3000.0f);
    FOG_SetProperties(0, 500.0f, D_0015DFA0[0], 0xFF000000u, 1000.0f);
    func_014B38(0xFFFFFFFFu);
}
