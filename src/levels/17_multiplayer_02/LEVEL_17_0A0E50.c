/* LEVEL_17:0x0A0E50 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_00267028[];
extern Win D_00267128;

extern void *memset(void *, int, unsigned int);
extern int func_09C2F0(int id, Rect *r, float f);
extern int func_096268(Rect *r);
extern int func_096320(Rect *r);
extern void func_096418(Win *w, int x, int y);
extern void func_096488(Win *w, int *a, int *b);
extern void func_0A0D58(int index, float f);
extern void func_0A0E28(int index);

void func_0A0E50(int index)
{
    Rect r;

    memset(&D_00267028[index], 0, 0x20);
    func_09C2F0(0x41, &r, 0.0f);
    D_00267128.w00 = 0;
    D_00267128.w04 = 0;
    D_00267128.w08 = 0x1E0;
    D_00267128.w0C = 0x110;
    func_096418(&D_00267128, (short)-func_096268(&r), (short)-func_096320(&r));
    D_00267028[index].w18 = 0xF0;
    D_00267028[index].w1C = 0x88;
    func_096488(&D_00267128, &D_00267028[index].w18, &D_00267028[index].w1C);
    D_00267028[index].w08 = 0xFF09A5D0u;
    D_00267028[index].w0C = 0xFF1C35FFu;
    func_0A0D58(index, 0.0f);
    func_0A0E28(index);
}
