/* LEVEL_01:0x0B2FF0 -- sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_00327A18[];
extern Win D_00327B18;

extern void *memset(void *, int, unsigned int);
extern int func_0AE708(int id, Rect *r, float f);
extern int func_0A86E0(Rect *r);
extern int func_0A8798(Rect *r);
extern void func_0A8860(Win *w, int x, int y);
extern void func_0A88D0(Win *w, int *a, int *b);
extern void func_0B2EF8(int index, float f);
extern void func_0B2FC8(int index);

void func_0B2FF0(int index)
{
    Rect r;

    memset(&D_00327A18[index], 0, 0x20);
    func_0AE708(0x41, &r, 0.0f);
    D_00327B18.w00 = 0;
    D_00327B18.w04 = 0;
    D_00327B18.w08 = 0x1E0;
    D_00327B18.w0C = 0x110;
    func_0A8860(&D_00327B18, (short)-func_0A86E0(&r), (short)-func_0A8798(&r));
    D_00327A18[index].w18 = 0xF0;
    D_00327A18[index].w1C = 0x88;
    func_0A88D0(&D_00327B18, &D_00327A18[index].w18, &D_00327A18[index].w1C);
    D_00327A18[index].w08 = 0xFF09A5D0u;
    D_00327A18[index].w0C = 0xFF1C35FFu;
    func_0B2EF8(index, 0.0f);
    func_0B2FC8(index);
}
