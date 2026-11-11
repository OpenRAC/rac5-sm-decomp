/* LEVEL_17:0x0006A8 -- placement copy of LEVEL_16_0006A8.c: initialises the two screen records (clears them, sets their rectangles, loads the default matrix and tint) and flags every record up to the count. */
typedef struct {
    float m[16];
} Mat;

typedef struct {
    Mat mat;
    char pad40[0x40];
    float x0;
    float y0;
    float x1;
    float y1;
    char pad90[0x60];
    int i0F0;
    char pad0F4[0x18];
    float f10C;
    float f110;
    char pad114[2];
    char b116;
    char pad117;
} Rec;

extern float D_00197E88;
extern Rec D_001CB8E0[2];
extern Rec *D_0018E2CC[1];
extern unsigned int D_0018E2D0;
extern Mat D_001C0100;

extern void *memset(void *s, int c, unsigned int n);
extern void func_000BF0(int index);
extern void func_001008(float v);

void func_0006A8(void)
{
    unsigned int i;
    unsigned int k;

    D_00197E88 = 1.0f;
    memset(D_001CB8E0, 0, 0x230);
    D_001CB8E0[0].x0 = 0.0f;
    D_001CB8E0[0].y0 = 0.0f;
    D_001CB8E0[0].x1 = 512.0f;
    D_001CB8E0[0].y1 = 208.0f;
    D_001CB8E0[1].x0 = 0.0f;
    D_001CB8E0[1].y0 = 208.0f;
    D_001CB8E0[1].x1 = 512.0f;
    D_001CB8E0[1].y1 = 208.0f;
    for (i = 0; i < 2; i++) {
        func_000BF0(i);
        D_0018E2CC[0]->f110 = 10000.0f;
        D_0018E2CC[0]->f10C = 1.0f;
        D_0018E2CC[0]->i0F0 = 0;
        D_0018E2CC[0]->mat = D_001C0100;
        D_0018E2CC[0]->b116 = 0;
        func_001008(0.5497787594795227f);
    }
    func_000BF0(0);
    for (k = 0; k < D_0018E2D0; k++) {
        D_001CB8E0[k].b116 = 1;
    }
}
