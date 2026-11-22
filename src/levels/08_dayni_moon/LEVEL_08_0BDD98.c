/* LEVEL_08:0x0BDD98 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_00376C98[];
extern Win D_00376D98;

extern void *memset(void *, int, unsigned int);
extern int func_0B9040(int id, Rect *r, float f);
extern int func_0B2FD8(Rect *r);
extern int func_0B3090(Rect *r);
extern void func_0B3158(Win *w, int x, int y);
extern void func_0B31C8(Win *w, int *a, int *b);
extern void func_0BDB90(int index, float f);
extern void func_0BDD70(int index);

void func_0BDD98(int index)
{
    Rect r;

    memset(&D_00376C98[index], 0, 0x20);
    func_0B9040(0x41, &r, 0.0f);
    D_00376D98.w00 = 0;
    D_00376D98.w04 = 0;
    D_00376D98.w08 = 0x1E0;
    D_00376D98.w0C = 0x110;
    func_0B3158(&D_00376D98, (short)-func_0B2FD8(&r), (short)-func_0B3090(&r));
    D_00376C98[index].w18 = 0xF0;
    D_00376C98[index].w1C = 0x88;
    func_0B31C8(&D_00376D98, &D_00376C98[index].w18, &D_00376C98[index].w1C);
    D_00376C98[index].w08 = 0xFF09A5D0u;
    D_00376C98[index].w0C = 0xFF1C35FFu;
    func_0BDB90(index, 0.0f);
    func_0BDD70(index);
}
