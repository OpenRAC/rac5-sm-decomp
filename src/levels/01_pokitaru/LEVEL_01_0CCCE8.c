/* LEVEL_01:0x0CCCE8 -- draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_0032C118;
extern char D_00214200[];
extern char D_00214208[];
extern Row D_00214210[];
extern float D_00202C98;

extern void func_0AEAA8(float f, int id, unsigned int color);
extern int func_0BA408(struct vec *v);
extern unsigned int func_0274B0(int index, unsigned int bit);
extern int func_0AE708(float f, int id, Rect *r);
extern int func_0A8680(int *value);
extern char *func_1324B0(int id);
extern void func_0AA790(short x, short y, char *s);
extern void func_0AB0F8(float fx, float fy, short x, short y, char *s);
extern void func_0AAA48(float fx, float fy, short x, short y, char *s);
extern void func_0A9B58(float fx, float fy, short x, short y, char *s);
extern void func_0A98C0(short x, short y, char *s);
extern void func_0AAEA0(short x, short y, char *s);
extern void func_0AD550(int index, void *rect, unsigned int color);
extern unsigned char func_0A8CC0(void);
extern void func_0A8CB0(unsigned char value);
extern void func_0284F0(void);
extern void func_0A8CA0(unsigned int value);
extern void func_0BA460(struct vec *v);
extern void func_0CD700(float f);

void func_0CCCE8(void)
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

    func_0AEAA8(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_00214210 + *(int *)(func_0BA408(&D_0032C118) + 0xD0) * 16);
    hit = func_0274B0(0x9A, row->b0C) != 0;
    func_0AE708(0.0f, 0x279, &r);
    func_0AA790(func_0A8680((int *)&r), r.h, func_1324B0(0x2CD));
    func_0AE708(0.0f, 0x27E, &r);
    func_0AB0F8(1.0f, 1.0f, r.w, r.h, func_1324B0(0x1CA));
    func_0AE708(0.0f, 0x278, &r);
    func_0AAA48(1.0f, 1.0f, func_0A8680((int *)&r), r.h, func_1324B0(0x318));
    func_0AE708(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_1324B0(0x1C6);
    else
        label = func_1324B0(0x1CB);
    func_0A9B58(1.0f, 1.0f, lx, ly, label);
    func_0AE708(0.0f, 0x272, &r);
    func_0A98C0(r.x, r.h, func_1324B0(0x1EE));
    if (!hit) {
        func_0AE708(0.0f, 0x273, &r);
        sprintf(buf, D_00214200, row->w4);
        func_0AAEA0(r.w, r.h, buf);
        func_0AE708(0.0f, 0x274, &r);
        func_0AD550(7, &r, 0xFFFFFFFF);
    }
    func_0AE708(0.0f, 0x27B, &r);
    sprintf(buf, D_00214208, func_1324B0(0x2D1));
    old = func_0A8CC0();
    func_0A8CB0(0);
    func_0A98C0(r.x, r.h, buf);
    func_0A8CB0(old);
    val = ((int (*)(void))func_0284F0)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0A8CA0(color);
    func_0AE708(0.0f, 0x27D, &r);
    sprintf(buf, D_00214200, val);
    func_0AAEA0(r.w, r.h, buf);
    func_0AE708(0.0f, 0x27C, &r);
    func_0AD550(7, &r, 0xFFFFFFFF);
    func_0A8CA0(0xFFFFFFFF);
    func_0A8CB0(0);
    func_0BA460(&D_0032C118);
    func_0A8CB0(1);
    func_0CD700(D_00202C98);
}
