/* LEVEL_10:0x0CE128 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_00335518;
extern char D_0021D180[];
extern char D_0021D188[];
extern Row D_0021D190[];
extern float D_0020BC98;

extern void func_0AFBC0(float f, int id, unsigned int color);
extern int func_0BB750(struct vec *v);
extern unsigned int func_026D90(int index, unsigned int bit);
extern int func_0AF820(float f, int id, Rect *r);
extern int func_0A9798(int *value);
extern char *func_130310(int id);
extern void func_0AB8A8(short x, short y, char *s);
extern void func_0AC210(float fx, float fy, short x, short y, char *s);
extern void func_0ABB60(float fx, float fy, short x, short y, char *s);
extern void func_0AAC70(float fx, float fy, short x, short y, char *s);
extern void func_0AA9D8(short x, short y, char *s);
extern void func_0ABFB8(short x, short y, char *s);
extern void func_0AE668(int index, void *rect, unsigned int color);
extern unsigned char func_0A9DD8(void);
extern void func_0A9DC8(unsigned char value);
extern void func_027DF8(void);
extern void func_0A9DB8(unsigned int value);
extern void func_0BB7A8(struct vec *v);
extern void func_0CEB40(float f);

void func_0CE128(void)
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

    func_0AFBC0(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_0021D190 + *(int *)(func_0BB750(&D_00335518) + 0xD0) * 16);
    hit = func_026D90(0x9A, row->b0C) != 0;
    func_0AF820(0.0f, 0x279, &r);
    func_0AB8A8(func_0A9798((int *)&r), r.h, func_130310(0x2CD));
    func_0AF820(0.0f, 0x27E, &r);
    func_0AC210(1.0f, 1.0f, r.w, r.h, func_130310(0x1CA));
    func_0AF820(0.0f, 0x278, &r);
    func_0ABB60(1.0f, 1.0f, func_0A9798((int *)&r), r.h, func_130310(0x318));
    func_0AF820(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_130310(0x1C6);
    else
        label = func_130310(0x1CB);
    func_0AAC70(1.0f, 1.0f, lx, ly, label);
    func_0AF820(0.0f, 0x272, &r);
    func_0AA9D8(r.x, r.h, func_130310(0x1EE));
    if (!hit) {
        func_0AF820(0.0f, 0x273, &r);
        sprintf(buf, D_0021D180, row->w4);
        func_0ABFB8(r.w, r.h, buf);
        func_0AF820(0.0f, 0x274, &r);
        func_0AE668(7, &r, 0xFFFFFFFF);
    }
    func_0AF820(0.0f, 0x27B, &r);
    sprintf(buf, D_0021D188, func_130310(0x2D1));
    old = func_0A9DD8();
    func_0A9DC8(0);
    func_0AA9D8(r.x, r.h, buf);
    func_0A9DC8(old);
    val = ((int (*)(void))func_027DF8)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0A9DB8(color);
    func_0AF820(0.0f, 0x27D, &r);
    sprintf(buf, D_0021D180, val);
    func_0ABFB8(r.w, r.h, buf);
    func_0AF820(0.0f, 0x27C, &r);
    func_0AE668(7, &r, 0xFFFFFFFF);
    func_0A9DB8(0xFFFFFFFF);
    func_0A9DC8(0);
    func_0BB7A8(&D_00335518);
    func_0A9DC8(1);
    func_0CEB40(D_0020BC98);
}
