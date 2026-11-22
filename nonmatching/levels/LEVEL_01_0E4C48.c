/* USA LEVEL_01.REL:0x0E4C48, 264-byte candidate (21 November 2026).
 * Measured sdk991111: 22 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0xA];
    unsigned char flags_0A;
    char pad_0B[5];
} Key;

extern void func_0E4890(Key *key, int a, int b, int c, int d);
extern int func_096C60(Key *key);
extern void func_0E4950(int idx, int a, int b, int c, int d, int e, float f0, float f1, float f2, float f3, float f4, float f5, float f6, float f7);

void func_0E4C48(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9,
                 float f0, float f1, float f2, float f3, float f4, float f5, float f6, float f7)
{
    Key key;
    int idx;

    func_0E4890(&key, p0, p5, p4, p7);
    key.flags_0A = key.flags_0A | 1;
    idx = func_096C60(&key);
    if (idx != -1) {
        func_0E4950(idx, p1, p2, p3, p8, p9, f0, f1, f2, f3, f4, f5, f6, f7);
    }
}
