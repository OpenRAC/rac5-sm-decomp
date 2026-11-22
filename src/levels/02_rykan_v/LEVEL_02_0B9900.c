/* LEVEL_02:0x0B9900 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_0033EF18[];
extern Win D_0033F018;

extern void *memset(void *, int, unsigned int);
extern int func_0B5018(int id, Rect *r, float f);
extern int func_0AEFF0(Rect *r);
extern int func_0AF0A8(Rect *r);
extern void func_0AF170(Win *w, int x, int y);
extern void func_0AF1E0(Win *w, int *a, int *b);
extern void func_0B9808(int index, float f);
extern void func_0B98D8(int index);

void func_0B9900(int index)
{
    Rect r;

    memset(&D_0033EF18[index], 0, 0x20);
    func_0B5018(0x41, &r, 0.0f);
    D_0033F018.w00 = 0;
    D_0033F018.w04 = 0;
    D_0033F018.w08 = 0x1E0;
    D_0033F018.w0C = 0x110;
    func_0AF170(&D_0033F018, (short)-func_0AEFF0(&r), (short)-func_0AF0A8(&r));
    D_0033EF18[index].w18 = 0xF0;
    D_0033EF18[index].w1C = 0x88;
    func_0AF1E0(&D_0033F018, &D_0033EF18[index].w18, &D_0033EF18[index].w1C);
    D_0033EF18[index].w08 = 0xFF09A5D0u;
    D_0033EF18[index].w0C = 0xFF1C35FFu;
    func_0B9808(index, 0.0f);
    func_0B98D8(index);
}
