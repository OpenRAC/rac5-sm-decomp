/* LEVEL_23:0x0A9DD0 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_002F8E68[];
extern Win D_002F8F68;

extern void *memset(void *, int, unsigned int);
extern int func_0A5478(int id, Rect *r, float f);
extern int func_09F450(Rect *r);
extern int func_09F508(Rect *r);
extern void func_09F5D0(Win *w, int x, int y);
extern void func_09F640(Win *w, int *a, int *b);
extern void func_0A9CD8(int index, float f);
extern void func_0A9DA8(int index);

void func_0A9DD0(int index)
{
    Rect r;

    memset(&D_002F8E68[index], 0, 0x20);
    func_0A5478(0x41, &r, 0.0f);
    D_002F8F68.w00 = 0;
    D_002F8F68.w04 = 0;
    D_002F8F68.w08 = 0x1E0;
    D_002F8F68.w0C = 0x110;
    func_09F5D0(&D_002F8F68, (short)-func_09F450(&r), (short)-func_09F508(&r));
    D_002F8E68[index].w18 = 0xF0;
    D_002F8E68[index].w1C = 0x88;
    func_09F640(&D_002F8F68, &D_002F8E68[index].w18, &D_002F8E68[index].w1C);
    D_002F8E68[index].w08 = 0xFF09A5D0u;
    D_002F8E68[index].w0C = 0xFF1C35FFu;
    func_0A9CD8(index, 0.0f);
    func_0A9DA8(index);
}
