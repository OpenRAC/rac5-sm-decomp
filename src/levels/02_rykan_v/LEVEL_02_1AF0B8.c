/* LEVEL_02:0x1AF0B8 -- runs a setup call, then decrements a float field and, when it is not positive, stores a flag byte chosen by comparing a shared word. */

struct Sub1 {
    unsigned char pad00[0x04];
    int w04;
};

struct Obj1 {
    unsigned char pad00[0x45];
    unsigned char b45;
    unsigned char pad46[0x54 - 0x46];
    struct Sub1 *p54;
    unsigned char pad58[0x70 - 0x58];
    float f70;
};

extern int D_0024CBEC;
void func_0AC910(int a0, int a1, int a2, int a3, int a4, int a5);

void func_1AF0B8(struct Obj1 *a0)
{
    float f;
    struct Sub1 *s;

    func_0AC910(0, 0, 30, 32, 3, 0);
    f = a0->f70 - 1.0f;
    a0->f70 = f;
    if (f <= 0.0f) {
        s = a0->p54;
        if (D_0024CBEC == s->w04) {
            a0->b45 = 4;
        } else {
            a0->b45 = 0;
        }
    }
}
