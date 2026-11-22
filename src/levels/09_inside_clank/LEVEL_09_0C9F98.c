/* LEVEL_09:0x0C9F98 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_00313898;
extern char D_001FDE00[];
extern char D_001FDE08[];
extern Row D_001FDE10[];
extern float D_001ECA98;

extern void func_0ABD58(float f, int id, unsigned int color);
extern int func_0B76B8(struct vec *v);
extern unsigned int func_0264B8(int index, unsigned int bit);
extern int func_0AB9B8(float f, int id, Rect *r);
extern int func_0A5930(int *value);
extern char *func_12B448(int id);
extern void func_0A7A40(short x, short y, char *s);
extern void func_0A83A8(float fx, float fy, short x, short y, char *s);
extern void func_0A7CF8(float fx, float fy, short x, short y, char *s);
extern void func_0A6E08(float fx, float fy, short x, short y, char *s);
extern void func_0A6B70(short x, short y, char *s);
extern void func_0A8150(short x, short y, char *s);
extern void func_0AA800(int index, void *rect, unsigned int color);
extern unsigned char func_0A5F70(void);
extern void func_0A5F60(unsigned char value);
extern void func_0274F8(void);
extern void func_0A5F50(unsigned int value);
extern void func_0B7710(struct vec *v);
extern void func_0CA9B0(float f);

void func_0C9F98(void)
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

    func_0ABD58(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_001FDE10 + *(int *)(func_0B76B8(&D_00313898) + 0xD0) * 16);
    hit = func_0264B8(0x9A, row->b0C) != 0;
    func_0AB9B8(0.0f, 0x279, &r);
    func_0A7A40(func_0A5930((int *)&r), r.h, func_12B448(0x2CD));
    func_0AB9B8(0.0f, 0x27E, &r);
    func_0A83A8(1.0f, 1.0f, r.w, r.h, func_12B448(0x1CA));
    func_0AB9B8(0.0f, 0x278, &r);
    func_0A7CF8(1.0f, 1.0f, func_0A5930((int *)&r), r.h, func_12B448(0x318));
    func_0AB9B8(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_12B448(0x1C6);
    else
        label = func_12B448(0x1CB);
    func_0A6E08(1.0f, 1.0f, lx, ly, label);
    func_0AB9B8(0.0f, 0x272, &r);
    func_0A6B70(r.x, r.h, func_12B448(0x1EE));
    if (!hit) {
        func_0AB9B8(0.0f, 0x273, &r);
        sprintf(buf, D_001FDE00, row->w4);
        func_0A8150(r.w, r.h, buf);
        func_0AB9B8(0.0f, 0x274, &r);
        func_0AA800(7, &r, 0xFFFFFFFF);
    }
    func_0AB9B8(0.0f, 0x27B, &r);
    sprintf(buf, D_001FDE08, func_12B448(0x2D1));
    old = func_0A5F70();
    func_0A5F60(0);
    func_0A6B70(r.x, r.h, buf);
    func_0A5F60(old);
    val = ((int (*)(void))func_0274F8)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0A5F50(color);
    func_0AB9B8(0.0f, 0x27D, &r);
    sprintf(buf, D_001FDE00, val);
    func_0A8150(r.w, r.h, buf);
    func_0AB9B8(0.0f, 0x27C, &r);
    func_0AA800(7, &r, 0xFFFFFFFF);
    func_0A5F50(0xFFFFFFFF);
    func_0A5F60(0);
    func_0B7710(&D_00313898);
    func_0A5F60(1);
    func_0CA9B0(D_001ECA98);
}
