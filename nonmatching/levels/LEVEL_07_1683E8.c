/* USA LEVEL_07:1683E8, 244-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial-divpad, assembler gnu-ee-trial; options: default.
 * Compiled 244 bytes: 18 differing words; first difference +0x7C. No matching credit.
 * Remaining issue: improved 35 -> 18 and length now 244 B: reusing the squared length for the
 * inverse (len = 1.0f / sqrtf(len)) keeps the sqrt result in f0 with no copy as retail; left: FP
 * registers after the div (retail inverse in place in the 1.0 register f2 and the x/y/z products
 * stored per component; ours inverse in f12 = len, products batched); separate len/inv locals
 * bring the sqrt copy back (248 B)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_07:0x1683E8 -- passes a normalised direction (or a default) to a helper. */
struct V3 {
    float x, y, z;
};
struct Src {
    char pad[0x10];
    struct V3 d;
};
extern struct V3 D_0022CB88;
extern float sqrtf(float x);
extern void func_07A978(char *a, char *b, struct V3 *v, int n, float s);

void func_1683E8(char *unused, char *p, struct Src *src)
{
    struct V3 v;
    float z;

    if (src) {
        struct V3 *d = &src->d;
        float len = d->x * d->x + d->y * d->y + d->z * d->z;

        len = 1.0f / sqrtf(len);
        v.x = len * d->x;
        v.y = len * d->y;
        z = len * d->z;
    } else {
        v.x = D_0022CB88.x;
        v.y = D_0022CB88.y;
        z = D_0022CB88.z;
    }
    v.z = z;
    func_07A978(p + 0xE4, p + 0xA0, &v, 2, 0.25f);
}
