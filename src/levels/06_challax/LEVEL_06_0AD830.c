/* LEVEL_06:0x0AD830 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_00314798[];
extern Win D_00314898;

extern void *memset(void *, int, unsigned int);
extern int func_0A8ED8(int id, Rect *r, float f);
extern int func_0A2EB0(Rect *r);
extern int func_0A2F68(Rect *r);
extern void func_0A3030(Win *w, int x, int y);
extern void func_0A30A0(Win *w, int *a, int *b);
extern void func_0AD738(int index, float f);
extern void func_0AD808(int index);

void func_0AD830(int index)
{
    Rect r;

    memset(&D_00314798[index], 0, 0x20);
    func_0A8ED8(0x41, &r, 0.0f);
    D_00314898.w00 = 0;
    D_00314898.w04 = 0;
    D_00314898.w08 = 0x1E0;
    D_00314898.w0C = 0x110;
    func_0A3030(&D_00314898, (short)-func_0A2EB0(&r), (short)-func_0A2F68(&r));
    D_00314798[index].w18 = 0xF0;
    D_00314798[index].w1C = 0x88;
    func_0A30A0(&D_00314898, &D_00314798[index].w18, &D_00314798[index].w1C);
    D_00314798[index].w08 = 0xFF09A5D0u;
    D_00314798[index].w0C = 0xFF1C35FFu;
    func_0AD738(index, 0.0f);
    func_0AD808(index);
}
