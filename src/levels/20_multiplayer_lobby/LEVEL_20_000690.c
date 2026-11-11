/* LEVEL_20:0x000690 -- placement copy of LEVEL_16_0006A8.c: initialises the two screen records (clears them, sets their rectangles, loads the default matrix and tint) and flags every record up to the count. */
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

extern float D_00106F68;
extern Rec D_00131F60[2];
extern Rec *D_000FD3B4[1];
extern unsigned int D_000FD3B8;
extern Mat D_0012DD00;

extern void *memset(void *s, int c, unsigned int n);
extern void func_000BD8(int index);
extern void func_000FC8(float v);

void func_000690(void)
{
    unsigned int i;
    unsigned int k;

    D_00106F68 = 1.0f;
    memset(D_00131F60, 0, 0x230);
    D_00131F60[0].x0 = 0.0f;
    D_00131F60[0].y0 = 0.0f;
    D_00131F60[0].x1 = 512.0f;
    D_00131F60[0].y1 = 208.0f;
    D_00131F60[1].x0 = 0.0f;
    D_00131F60[1].y0 = 208.0f;
    D_00131F60[1].x1 = 512.0f;
    D_00131F60[1].y1 = 208.0f;
    for (i = 0; i < 2; i++) {
        func_000BD8(i);
        D_000FD3B4[0]->f110 = 10000.0f;
        D_000FD3B4[0]->f10C = 1.0f;
        D_000FD3B4[0]->i0F0 = 0;
        D_000FD3B4[0]->mat = D_0012DD00;
        D_000FD3B4[0]->b116 = 0;
        func_000FC8(0.5497787594795227f);
    }
    func_000BD8(0);
    for (k = 0; k < D_000FD3B8; k++) {
        D_00131F60[k].b116 = 1;
    }
}
