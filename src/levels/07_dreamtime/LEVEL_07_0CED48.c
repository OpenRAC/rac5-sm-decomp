/* LEVEL_07:0x0CED48 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_00341A18;
extern char D_00228F00[];
extern char D_00228F08[];
extern Row D_00228F10[];
extern float D_00216F98;

extern void func_0B0AA8(float f, int id, unsigned int color);
extern int func_0BC468(struct vec *v);
extern unsigned int func_027810(int index, unsigned int bit);
extern int func_0B0708(float f, int id, Rect *r);
extern int func_0AA680(int *value);
extern char *func_1354B0(int id);
extern void func_0AC790(short x, short y, char *s);
extern void func_0AD0F8(float fx, float fy, short x, short y, char *s);
extern void func_0ACA48(float fx, float fy, short x, short y, char *s);
extern void func_0ABB58(float fx, float fy, short x, short y, char *s);
extern void func_0AB8C0(short x, short y, char *s);
extern void func_0ACEA0(short x, short y, char *s);
extern void func_0AF550(int index, void *rect, unsigned int color);
extern unsigned char func_0AACC0(void);
extern void func_0AACB0(unsigned char value);
extern void func_028850(void);
extern void func_0AACA0(unsigned int value);
extern void func_0BC4C0(struct vec *v);
extern void func_0CF760(float f);

void func_0CED48(void)
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

    func_0B0AA8(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_00228F10 + *(int *)(func_0BC468(&D_00341A18) + 0xD0) * 16);
    hit = func_027810(0x9A, row->b0C) != 0;
    func_0B0708(0.0f, 0x279, &r);
    func_0AC790(func_0AA680((int *)&r), r.h, func_1354B0(0x2CD));
    func_0B0708(0.0f, 0x27E, &r);
    func_0AD0F8(1.0f, 1.0f, r.w, r.h, func_1354B0(0x1CA));
    func_0B0708(0.0f, 0x278, &r);
    func_0ACA48(1.0f, 1.0f, func_0AA680((int *)&r), r.h, func_1354B0(0x318));
    func_0B0708(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_1354B0(0x1C6);
    else
        label = func_1354B0(0x1CB);
    func_0ABB58(1.0f, 1.0f, lx, ly, label);
    func_0B0708(0.0f, 0x272, &r);
    func_0AB8C0(r.x, r.h, func_1354B0(0x1EE));
    if (!hit) {
        func_0B0708(0.0f, 0x273, &r);
        sprintf(buf, D_00228F00, row->w4);
        func_0ACEA0(r.w, r.h, buf);
        func_0B0708(0.0f, 0x274, &r);
        func_0AF550(7, &r, 0xFFFFFFFF);
    }
    func_0B0708(0.0f, 0x27B, &r);
    sprintf(buf, D_00228F08, func_1354B0(0x2D1));
    old = func_0AACC0();
    func_0AACB0(0);
    func_0AB8C0(r.x, r.h, buf);
    func_0AACB0(old);
    val = ((int (*)(void))func_028850)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0AACA0(color);
    func_0B0708(0.0f, 0x27D, &r);
    sprintf(buf, D_00228F00, val);
    func_0ACEA0(r.w, r.h, buf);
    func_0B0708(0.0f, 0x27C, &r);
    func_0AF550(7, &r, 0xFFFFFFFF);
    func_0AACA0(0xFFFFFFFF);
    func_0AACB0(0);
    func_0BC4C0(&D_00341A18);
    func_0AACB0(1);
    func_0CF760(D_00216F98);
}
