/* LEVEL_08:0x22C8B0 -- placement copy of LEVEL_01_1E7A08.c: derives scaled deltas, a falloff factor, unpacked colour channels and four packed coordinate words for a record. */

struct Rec1E7A08 {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    unsigned int color1C;
    char pad20[0x0C];
    float f2C;
    float f30;
    float f34;
    float f38;
    unsigned int rgb3C;
    float alpha40;
    unsigned int w44;
    unsigned int w48;
    unsigned int w4C;
    unsigned int w50;
    int w54;
};

extern void func_0A13F0(unsigned int *a, unsigned int *b, unsigned int c);

void func_22C8B0(struct Rec1E7A08 *o, unsigned int arg)
{
    unsigned int v[2];
    unsigned int c;
    unsigned int x;
    unsigned int y;
    float k;

    o->f2C = (o->f04 - o->f00) * 4.656613e-10f;
    o->f30 = (o->f0C - o->f08) * 4.656613e-10f;
    o->f34 = o->f14 - o->f18;
    if (o->f10 > 0.99f) {
        k = 100.0f;
    } else {
        k = 1.0f / (1.0f - o->f10);
    }
    o->f38 = k;
    c = o->color1C;
    o->rgb3C = c & 0xFFFFFF;
    o->alpha40 = (float)((c >> 24) & 0xFF);
    func_0A13F0(&v[0], &v[1], (arg >> 16) & 0x7FF);
    x = v[0];
    y = v[1];
    o->w54 = 4;
    o->w48 = (y << 16) | (x << 2);
    o->w4C = x | (y << 18);
    o->w50 = x | (y << 16);
    o->w44 = o->w50 << 2;
}
