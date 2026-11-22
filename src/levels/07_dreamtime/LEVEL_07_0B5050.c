/* LEVEL_07:0x0B5050 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_0033D318[];
extern Win D_0033D418;

extern void *memset(void *, int, unsigned int);
extern int func_0B0708(int id, Rect *r, float f);
extern int func_0AA6E0(Rect *r);
extern int func_0AA798(Rect *r);
extern void func_0AA860(Win *w, int x, int y);
extern void func_0AA8D0(Win *w, int *a, int *b);
extern void func_0B4F58(int index, float f);
extern void func_0B5028(int index);

void func_0B5050(int index)
{
    Rect r;

    memset(&D_0033D318[index], 0, 0x20);
    func_0B0708(0x41, &r, 0.0f);
    D_0033D418.w00 = 0;
    D_0033D418.w04 = 0;
    D_0033D418.w08 = 0x1E0;
    D_0033D418.w0C = 0x110;
    func_0AA860(&D_0033D418, (short)-func_0AA6E0(&r), (short)-func_0AA798(&r));
    D_0033D318[index].w18 = 0xF0;
    D_0033D318[index].w1C = 0x88;
    func_0AA8D0(&D_0033D418, &D_0033D318[index].w18, &D_0033D318[index].w1C);
    D_0033D318[index].w08 = 0xFF09A5D0u;
    D_0033D318[index].w0C = 0xFF1C35FFu;
    func_0B4F58(index, 0.0f);
    func_0B5028(index);
}
