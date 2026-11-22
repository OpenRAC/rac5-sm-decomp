/* LEVEL_19:0x0BBCC0 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_0027A318;
extern char D_001CA2C0[];
extern char D_001CA2C8[];
extern Row D_001CA2D0[];
extern float D_001B1CC8;

extern void func_09CA28(float f, int id, unsigned int color);
extern int func_0A8D30(struct vec *v);
extern unsigned int func_024AF8(int index, unsigned int bit);
extern int func_09C688(float f, int id, Rect *r);
extern int func_0965A0(int *value);
extern char *func_10F9D0(int id);
extern void func_098710(short x, short y, char *s);
extern void func_099078(float fx, float fy, short x, short y, char *s);
extern void func_0989C8(float fx, float fy, short x, short y, char *s);
extern void func_097AD8(float fx, float fy, short x, short y, char *s);
extern void func_097840(short x, short y, char *s);
extern void func_098E20(short x, short y, char *s);
extern void func_09B4D0(int index, void *rect, unsigned int color);
extern unsigned char func_096C10(void);
extern void func_096C00(unsigned char value);
extern void func_025BB8(void);
extern void func_096BF0(unsigned int value);
extern void func_0A8D88(struct vec *v);
extern void func_0BC6D8(float f);

void func_0BBCC0(void)
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

    func_09CA28(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_001CA2D0 + *(int *)(func_0A8D30(&D_0027A318) + 0xD0) * 16);
    hit = func_024AF8(0x9A, row->b0C) != 0;
    func_09C688(0.0f, 0x279, &r);
    func_098710(func_0965A0((int *)&r), r.h, func_10F9D0(0x2CD));
    func_09C688(0.0f, 0x27E, &r);
    func_099078(1.0f, 1.0f, r.w, r.h, func_10F9D0(0x1CA));
    func_09C688(0.0f, 0x278, &r);
    func_0989C8(1.0f, 1.0f, func_0965A0((int *)&r), r.h, func_10F9D0(0x318));
    func_09C688(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_10F9D0(0x1C6);
    else
        label = func_10F9D0(0x1CB);
    func_097AD8(1.0f, 1.0f, lx, ly, label);
    func_09C688(0.0f, 0x272, &r);
    func_097840(r.x, r.h, func_10F9D0(0x1EE));
    if (!hit) {
        func_09C688(0.0f, 0x273, &r);
        sprintf(buf, D_001CA2C0, row->w4);
        func_098E20(r.w, r.h, buf);
        func_09C688(0.0f, 0x274, &r);
        func_09B4D0(7, &r, 0xFFFFFFFF);
    }
    func_09C688(0.0f, 0x27B, &r);
    sprintf(buf, D_001CA2C8, func_10F9D0(0x2D1));
    old = func_096C10();
    func_096C00(0);
    func_097840(r.x, r.h, buf);
    func_096C00(old);
    val = ((int (*)(void))func_025BB8)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_096BF0(color);
    func_09C688(0.0f, 0x27D, &r);
    sprintf(buf, D_001CA2C0, val);
    func_098E20(r.w, r.h, buf);
    func_09C688(0.0f, 0x27C, &r);
    func_09B4D0(7, &r, 0xFFFFFFFF);
    func_096BF0(0xFFFFFFFF);
    func_096C00(0);
    func_0A8D88(&D_0027A318);
    func_096C00(1);
    func_0BC6D8(D_001B1CC8);
}
