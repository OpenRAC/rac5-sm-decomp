/* LEVEL_16:0x0A1958 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_00275D28[];
extern Win D_00275E28;

extern void *memset(void *, int, unsigned int);
extern int func_09CDF8(int id, Rect *r, float f);
extern int func_096D70(Rect *r);
extern int func_096E28(Rect *r);
extern void func_096F20(Win *w, int x, int y);
extern void func_096F90(Win *w, int *a, int *b);
extern void func_0A1860(int index, float f);
extern void func_0A1930(int index);

void func_0A1958(int index)
{
    Rect r;

    memset(&D_00275D28[index], 0, 0x20);
    func_09CDF8(0x41, &r, 0.0f);
    D_00275E28.w00 = 0;
    D_00275E28.w04 = 0;
    D_00275E28.w08 = 0x1E0;
    D_00275E28.w0C = 0x110;
    func_096F20(&D_00275E28, (short)-func_096D70(&r), (short)-func_096E28(&r));
    D_00275D28[index].w18 = 0xF0;
    D_00275D28[index].w1C = 0x88;
    func_096F90(&D_00275E28, &D_00275D28[index].w18, &D_00275D28[index].w1C);
    D_00275D28[index].w08 = 0xFF09A5D0u;
    D_00275D28[index].w0C = 0xFF1C35FFu;
    func_0A1860(index, 0.0f);
    func_0A1930(index);
}
