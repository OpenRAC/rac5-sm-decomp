/* LEVEL_19:0x0A11E8 -- placement copy of LEVEL_01_0B2FF0.c: sets up one 0x20-byte menu element: clears it, queries the panel size, centres the element's rectangle on it, writes the element's size and colours and resets its level and link words. */
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

extern El D_00275EA8[];
extern Win D_00275FA8;

extern void *memset(void *, int, unsigned int);
extern int func_09C688(int id, Rect *r, float f);
extern int func_096600(Rect *r);
extern int func_0966B8(Rect *r);
extern void func_0967B0(Win *w, int x, int y);
extern void func_096820(Win *w, int *a, int *b);
extern void func_0A10F0(int index, float f);
extern void func_0A11C0(int index);

void func_0A11E8(int index)
{
    Rect r;

    memset(&D_00275EA8[index], 0, 0x20);
    func_09C688(0x41, &r, 0.0f);
    D_00275FA8.w00 = 0;
    D_00275FA8.w04 = 0;
    D_00275FA8.w08 = 0x1E0;
    D_00275FA8.w0C = 0x110;
    func_0967B0(&D_00275FA8, (short)-func_096600(&r), (short)-func_0966B8(&r));
    D_00275EA8[index].w18 = 0xF0;
    D_00275EA8[index].w1C = 0x88;
    func_096820(&D_00275FA8, &D_00275EA8[index].w18, &D_00275EA8[index].w1C);
    D_00275EA8[index].w08 = 0xFF09A5D0u;
    D_00275EA8[index].w0C = 0xFF1C35FFu;
    func_0A10F0(index, 0.0f);
    func_0A11C0(index);
}
