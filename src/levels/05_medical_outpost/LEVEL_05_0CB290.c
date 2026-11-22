/* LEVEL_05:0x0CB290 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_00317FD8;
extern char D_00203100[];
extern char D_00203108[];
extern Row D_00203110[];
extern float D_001F2018;

extern void func_0AD068(float f, int id, unsigned int color);
extern int func_0B89B0(struct vec *v);
extern unsigned int func_0261F0(int index, unsigned int bit);
extern int func_0ACCC8(float f, int id, Rect *r);
extern int func_0A6C40(int *value);
extern char *func_12DE28(int id);
extern void func_0A8D50(short x, short y, char *s);
extern void func_0A96B8(float fx, float fy, short x, short y, char *s);
extern void func_0A9008(float fx, float fy, short x, short y, char *s);
extern void func_0A8118(float fx, float fy, short x, short y, char *s);
extern void func_0A7E80(short x, short y, char *s);
extern void func_0A9460(short x, short y, char *s);
extern void func_0ABB10(int index, void *rect, unsigned int color);
extern unsigned char func_0A7280(void);
extern void func_0A7270(unsigned char value);
extern void func_027308(void);
extern void func_0A7260(unsigned int value);
extern void func_0B8A08(struct vec *v);
extern void func_0CBCA8(float f);

void func_0CB290(void)
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

    func_0AD068(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_00203110 + *(int *)(func_0B89B0(&D_00317FD8) + 0xD0) * 16);
    hit = func_0261F0(0x9A, row->b0C) != 0;
    func_0ACCC8(0.0f, 0x279, &r);
    func_0A8D50(func_0A6C40((int *)&r), r.h, func_12DE28(0x2CD));
    func_0ACCC8(0.0f, 0x27E, &r);
    func_0A96B8(1.0f, 1.0f, r.w, r.h, func_12DE28(0x1CA));
    func_0ACCC8(0.0f, 0x278, &r);
    func_0A9008(1.0f, 1.0f, func_0A6C40((int *)&r), r.h, func_12DE28(0x318));
    func_0ACCC8(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_12DE28(0x1C6);
    else
        label = func_12DE28(0x1CB);
    func_0A8118(1.0f, 1.0f, lx, ly, label);
    func_0ACCC8(0.0f, 0x272, &r);
    func_0A7E80(r.x, r.h, func_12DE28(0x1EE));
    if (!hit) {
        func_0ACCC8(0.0f, 0x273, &r);
        sprintf(buf, D_00203100, row->w4);
        func_0A9460(r.w, r.h, buf);
        func_0ACCC8(0.0f, 0x274, &r);
        func_0ABB10(7, &r, 0xFFFFFFFF);
    }
    func_0ACCC8(0.0f, 0x27B, &r);
    sprintf(buf, D_00203108, func_12DE28(0x2D1));
    old = func_0A7280();
    func_0A7270(0);
    func_0A7E80(r.x, r.h, buf);
    func_0A7270(old);
    val = ((int (*)(void))func_027308)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0A7260(color);
    func_0ACCC8(0.0f, 0x27D, &r);
    sprintf(buf, D_00203100, val);
    func_0A9460(r.w, r.h, buf);
    func_0ACCC8(0.0f, 0x27C, &r);
    func_0ABB10(7, &r, 0xFFFFFFFF);
    func_0A7260(0xFFFFFFFF);
    func_0A7270(0);
    func_0B8A08(&D_00317FD8);
    func_0A7270(1);
    func_0CBCA8(D_001F2018);
}
