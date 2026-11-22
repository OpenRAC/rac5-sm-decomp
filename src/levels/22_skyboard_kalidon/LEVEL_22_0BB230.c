/* LEVEL_22:0x0BB230 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
extern int sprintf(char *buf, const char *fmt, ...);

struct vec;

typedef struct {
    short x;
    short pad02[3];
    unsigned short w;
    short pad0A;
    unsigned short h;
    short pad0E;
} Rect;

typedef struct {
    int w0;
    unsigned int w4;
    int w8;
    unsigned char b0C;
    char pad0D[3];
} Row;

extern struct vec D_00281CD8;
extern char D_00171680[];
extern char D_00171688[];
extern Row D_00171690[];
extern float D_00162018;

extern void func_09D0B8(float f, int id, unsigned int color);
extern int func_0A88B0(struct vec *v);
extern unsigned int func_021E40(int index, unsigned int bit);
extern int func_09CD18(float f, int id, Rect *r);
extern int func_096C90(int *value);
extern char *func_109980(int id);
extern void func_098DA0(short x, short y, char *s);
extern void func_099708(float fx, float fy, short x, short y, char *s);
extern void func_099058(float fx, float fy, short x, short y, char *s);
extern void func_098168(float fx, float fy, short x, short y, char *s);
extern void func_097ED0(short x, short y, char *s);
extern void func_0994B0(short x, short y, char *s);
extern void func_09BB60(int index, void *rect, unsigned int color);
extern unsigned char func_0972D0(void);
extern void func_0972C0(unsigned char value);
extern void func_022CD8(void);
extern void func_0972B0(unsigned int value);
extern void func_0A8908(struct vec *v);
extern void func_0BBC48(float f);

void func_0BB230(void)
{
    Rect r;
    char buf[0x40];
    Row *row;
    int hit;
    unsigned char old;
    unsigned int val;
    unsigned int color;
    char *label;
    short lx;
    short ly;

    func_09D0B8(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_00171690 + *(int *)(func_0A88B0(&D_00281CD8) + 0xD0) * 16);
    hit = func_021E40(0x9A, row->b0C) != 0;
    func_09CD18(0.0f, 0x279, &r);
    func_098DA0(func_096C90((int *)&r), r.h, func_109980(0x2CD));
    func_09CD18(0.0f, 0x27E, &r);
    func_099708(1.0f, 1.0f, r.w, r.h, func_109980(0x1CA));
    func_09CD18(0.0f, 0x278, &r);
    func_099058(1.0f, 1.0f, func_096C90((int *)&r), r.h, func_109980(0x318));
    func_09CD18(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_109980(0x1C6);
    else
        label = func_109980(0x1CB);
    func_098168(1.0f, 1.0f, lx, ly, label);
    func_09CD18(0.0f, 0x272, &r);
    func_097ED0(r.x, r.h, func_109980(0x1EE));
    if (!hit) {
        func_09CD18(0.0f, 0x273, &r);
        sprintf(buf, D_00171680, row->w4);
        func_0994B0(r.w, r.h, buf);
        func_09CD18(0.0f, 0x274, &r);
        func_09BB60(7, &r, 0xFFFFFFFF);
    }
    func_09CD18(0.0f, 0x27B, &r);
    sprintf(buf, D_00171688, func_109980(0x2D1));
    old = func_0972D0();
    func_0972C0(0);
    func_097ED0(r.x, r.h, buf);
    func_0972C0(old);
    val = ((int (*)(void))func_022CD8)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0972B0(color);
    func_09CD18(0.0f, 0x27D, &r);
    sprintf(buf, D_00171680, val);
    func_0994B0(r.w, r.h, buf);
    func_09CD18(0.0f, 0x27C, &r);
    func_09BB60(7, &r, 0xFFFFFFFF);
    func_0972B0(0xFFFFFFFF);
    func_0972C0(0);
    func_0A8908(&D_00281CD8);
    func_0972C0(1);
    func_0BBC48(D_00162018);
}
