/* LEVEL_20:0x08C050 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_00199568[];
extern Win D_00199668;

extern void *memset(void *, int, unsigned int);
extern int func_0874F0(int id, Rect *r, float f);
extern int func_081468(Rect *r);
extern int func_081520(Rect *r);
extern void func_081618(Win *w, int x, int y);
extern void func_081688(Win *w, int *a, int *b);
extern void func_08BF58(int index, float f);
extern void func_08C028(int index);

void func_08C050(int index)
{
    Rect r;

    memset(&D_00199568[index], 0, 0x20);
    func_0874F0(0x41, &r, 0.0f);
    D_00199668.w00 = 0;
    D_00199668.w04 = 0;
    D_00199668.w08 = 0x1E0;
    D_00199668.w0C = 0x110;
    func_081618(&D_00199668, (short)-func_081468(&r), (short)-func_081520(&r));
    D_00199568[index].w18 = 0xF0;
    D_00199568[index].w1C = 0x88;
    func_081688(&D_00199668, &D_00199568[index].w18, &D_00199568[index].w1C);
    D_00199568[index].w08 = 0xFF09A5D0u;
    D_00199568[index].w0C = 0xFF1C35FFu;
    func_08BF58(index, 0.0f);
    func_08C028(index);
}
