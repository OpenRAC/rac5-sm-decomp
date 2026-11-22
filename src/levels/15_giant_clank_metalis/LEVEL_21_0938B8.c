/* LEVEL_21:0x0938B8 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_0023FA58[];
extern Win D_0023FB58;

extern void *memset(void *, int, unsigned int);
extern int func_08EFD0(int id, Rect *r, float f);
extern int func_088FA8(Rect *r);
extern int func_089060(Rect *r);
extern void func_089128(Win *w, int x, int y);
extern void func_089198(Win *w, int *a, int *b);
extern void func_0937C0(int index, float f);
extern void func_093890(int index);

void func_0938B8(int index)
{
    Rect r;

    memset(&D_0023FA58[index], 0, 0x20);
    func_08EFD0(0x41, &r, 0.0f);
    D_0023FB58.w00 = 0;
    D_0023FB58.w04 = 0;
    D_0023FB58.w08 = 0x1E0;
    D_0023FB58.w0C = 0x110;
    func_089128(&D_0023FB58, (short)-func_088FA8(&r), (short)-func_089060(&r));
    D_0023FA58[index].w18 = 0xF0;
    D_0023FA58[index].w1C = 0x88;
    func_089198(&D_0023FB58, &D_0023FA58[index].w18, &D_0023FA58[index].w1C);
    D_0023FA58[index].w08 = 0xFF09A5D0u;
    D_0023FA58[index].w0C = 0xFF1C35FFu;
    func_0937C0(index, 0.0f);
    func_093890(index);
}
