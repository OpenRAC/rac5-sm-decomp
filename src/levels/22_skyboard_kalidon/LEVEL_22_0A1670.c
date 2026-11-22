/* LEVEL_22:0x0A1670 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_0027D5E8[];
extern Win D_0027D6E8;

extern void *memset(void *, int, unsigned int);
extern int func_09CD18(int id, Rect *r, float f);
extern int func_096CF0(Rect *r);
extern int func_096DA8(Rect *r);
extern void func_096E70(Win *w, int x, int y);
extern void func_096EE0(Win *w, int *a, int *b);
extern void func_0A1578(int index, float f);
extern void func_0A1648(int index);

void func_0A1670(int index)
{
    Rect r;

    memset(&D_0027D5E8[index], 0, 0x20);
    func_09CD18(0x41, &r, 0.0f);
    D_0027D6E8.w00 = 0;
    D_0027D6E8.w04 = 0;
    D_0027D6E8.w08 = 0x1E0;
    D_0027D6E8.w0C = 0x110;
    func_096E70(&D_0027D6E8, (short)-func_096CF0(&r), (short)-func_096DA8(&r));
    D_0027D5E8[index].w18 = 0xF0;
    D_0027D5E8[index].w1C = 0x88;
    func_096EE0(&D_0027D6E8, &D_0027D5E8[index].w18, &D_0027D5E8[index].w1C);
    D_0027D5E8[index].w08 = 0xFF09A5D0u;
    D_0027D5E8[index].w0C = 0xFF1C35FFu;
    func_0A1578(index, 0.0f);
    func_0A1648(index);
}
