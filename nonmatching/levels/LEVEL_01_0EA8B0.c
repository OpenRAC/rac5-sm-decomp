/* USA LEVEL_01.REL:0x0EA8B0, 208-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 15 differing words; first difference at 0x10.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Req {
    char pad_00[0xA];
    unsigned char flags_0A;
    char pad_0B[0x10 - 0xB];
} Req;

extern void func_0EA630(Req *r, int a, int b, int c, int d);
extern int func_096C60(Req *r);
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

extern void func_0EA6F0(float w, float hi, float lo, float angle, int handle, Vec3 *a, Vec3 *b, unsigned int color, Vec3 *c);

void func_0EA8B0(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3,
                 float f0, float f1, float f2, float f3)
{
    Req req;
    int h;

    func_0EA630(&req, a0, t0, t2, t3);
    req.flags_0A |= 1;
    h = func_096C60(&req);
    if (h != -1)
        func_0EA6F0(f0, f1, f2, f3, h, (Vec3 *)a1, (Vec3 *)a2, a3, (Vec3 *)t1);
}
