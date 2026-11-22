/* LEVEL_10:0x0DDDD8 -- placement copy of LEVEL_01_0DC998.c: picks a random position inside the x and z ranges of a spawn record and starts the spawn with the record's parameters. */
typedef struct {
    char pad00[0x10];
    int w10;
    int w14;
    float f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    unsigned char b38;
    unsigned char b39;
    unsigned char b3A;
} Rec;

extern int rand(void);
extern void func_0DD680(int p0, int p1, int p2, float p3, float p4, float p5, int p6, int p7, float p8, float p9, int p10, float p11, int p12, int p13);

void func_0DDDD8(int a0, int a1, Rec *r, int a3)
{
    float lx;
    float dx;
    float lz;
    float dz;
    float x;
    float z;
    int id;

    lx = r->f18;
    dx = r->f1C - lx;
    id = r->b3A;
    x = lx + dx * ((float)rand() * 4.656612873077393e-10f);
    lz = r->f2C;
    dz = r->f30 - lz;
    z = lz + dz * ((float)rand() * 4.656612873077393e-10f);
    func_0DD680(id, a0, a1, x, r->f20, r->f24, r->w10, r->w14, r->f28, z, r->b38, r->f34, r->b39, a3);
}
