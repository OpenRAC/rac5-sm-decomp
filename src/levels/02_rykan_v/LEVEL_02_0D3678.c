/* LEVEL_02:0x0D3678 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_00343618;
extern char D_00229180[];
extern char D_00229188[];
extern Row D_00229190[];
extern float D_00217C58;

extern void func_0B53B8(float f, int id, unsigned int color);
extern int func_0C0D18(struct vec *v);
extern unsigned int func_027C98(int index, unsigned int bit);
extern int func_0B5018(float f, int id, Rect *r);
extern int func_0AEF90(int *value);
extern char *func_138860(int id);
extern void func_0B10A0(short x, short y, char *s);
extern void func_0B1A08(float fx, float fy, short x, short y, char *s);
extern void func_0B1358(float fx, float fy, short x, short y, char *s);
extern void func_0B0468(float fx, float fy, short x, short y, char *s);
extern void func_0B01D0(short x, short y, char *s);
extern void func_0B17B0(short x, short y, char *s);
extern void func_0B3E60(int index, void *rect, unsigned int color);
extern unsigned char func_0AF5D0(void);
extern void func_0AF5C0(unsigned char value);
extern void func_028CD8(void);
extern void func_0AF5B0(unsigned int value);
extern void func_0C0D70(struct vec *v);
extern void func_0D4090(float f);

void func_0D3678(void)
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

    func_0B53B8(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_00229190 + *(int *)(func_0C0D18(&D_00343618) + 0xD0) * 16);
    hit = func_027C98(0x9A, row->b0C) != 0;
    func_0B5018(0.0f, 0x279, &r);
    func_0B10A0(func_0AEF90((int *)&r), r.h, func_138860(0x2CD));
    func_0B5018(0.0f, 0x27E, &r);
    func_0B1A08(1.0f, 1.0f, r.w, r.h, func_138860(0x1CA));
    func_0B5018(0.0f, 0x278, &r);
    func_0B1358(1.0f, 1.0f, func_0AEF90((int *)&r), r.h, func_138860(0x318));
    func_0B5018(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_138860(0x1C6);
    else
        label = func_138860(0x1CB);
    func_0B0468(1.0f, 1.0f, lx, ly, label);
    func_0B5018(0.0f, 0x272, &r);
    func_0B01D0(r.x, r.h, func_138860(0x1EE));
    if (!hit) {
        func_0B5018(0.0f, 0x273, &r);
        sprintf(buf, D_00229180, row->w4);
        func_0B17B0(r.w, r.h, buf);
        func_0B5018(0.0f, 0x274, &r);
        func_0B3E60(7, &r, 0xFFFFFFFF);
    }
    func_0B5018(0.0f, 0x27B, &r);
    sprintf(buf, D_00229188, func_138860(0x2D1));
    old = func_0AF5D0();
    func_0AF5C0(0);
    func_0B01D0(r.x, r.h, buf);
    func_0AF5C0(old);
    val = ((int (*)(void))func_028CD8)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0AF5B0(color);
    func_0B5018(0.0f, 0x27D, &r);
    sprintf(buf, D_00229180, val);
    func_0B17B0(r.w, r.h, buf);
    func_0B5018(0.0f, 0x27C, &r);
    func_0B3E60(7, &r, 0xFFFFFFFF);
    func_0AF5B0(0xFFFFFFFF);
    func_0AF5C0(0);
    func_0C0D70(&D_00343618);
    func_0AF5C0(1);
    func_0D4090(D_00217C58);
}
