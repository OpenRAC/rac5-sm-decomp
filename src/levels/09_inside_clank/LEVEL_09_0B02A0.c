/* LEVEL_09:0x0B02A0 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
typedef struct {
    int w00;
    int w04;
    unsigned int w08;
    unsigned int w0C;
    char pad10[0x18 - 0x10];
    int w18;
    int w1C;
} El;

typedef struct {
    int w00;
    int w04;
    int w08;
    int w0C;
} Win;

typedef struct {
    short x;
    short y;
    short w;
    short h;
} Rect;

extern El D_0030F198[];
extern Win D_0030F298;

extern void *memset(void *, int, unsigned int);
extern int func_0AB9B8(int id, Rect *r, float f);
extern int func_0A5990(Rect *r);
extern int func_0A5A48(Rect *r);
extern void func_0A5B10(Win *w, int x, int y);
extern void func_0A5B80(Win *w, int *a, int *b);
extern void func_0B01A8(int index, float f);
extern void func_0B0278(int index);

void func_0B02A0(int index)
{
    Rect r;

    memset(&D_0030F198[index], 0, 0x20);
    func_0AB9B8(0x41, &r, 0.0f);
    D_0030F298.w00 = 0;
    D_0030F298.w04 = 0;
    D_0030F298.w08 = 0x1E0;
    D_0030F298.w0C = 0x110;
    func_0A5B10(&D_0030F298, (short)-func_0A5990(&r), (short)-func_0A5A48(&r));
    D_0030F198[index].w18 = 0xF0;
    D_0030F198[index].w1C = 0x88;
    func_0A5B80(&D_0030F298, &D_0030F198[index].w18, &D_0030F198[index].w1C);
    D_0030F198[index].w08 = 0xFF09A5D0u;
    D_0030F198[index].w0C = 0xFF1C35FFu;
    func_0B01A8(index, 0.0f);
    func_0B0278(index);
}
