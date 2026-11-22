/* LEVEL_16:0x0BC3E8 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_0027A198;
extern char D_001C90C0[];
extern char D_001C90C8[];
extern Row D_001C90D0[];
extern float D_001B0B48;

extern void func_09D198(float f, int id, unsigned int color);
extern int func_0A9458(struct vec *v);
extern unsigned int func_024F50(int index, unsigned int bit);
extern int func_09CDF8(float f, int id, Rect *r);
extern int func_096D10(int *value);
extern char *func_10F330(int id);
extern void func_098E80(short x, short y, char *s);
extern void func_0997E8(float fx, float fy, short x, short y, char *s);
extern void func_099138(float fx, float fy, short x, short y, char *s);
extern void func_098248(float fx, float fy, short x, short y, char *s);
extern void func_097FB0(short x, short y, char *s);
extern void func_099590(short x, short y, char *s);
extern void func_09BC40(int index, void *rect, unsigned int color);
extern unsigned char func_097380(void);
extern void func_097370(unsigned char value);
extern void func_026010(void);
extern void func_097360(unsigned int value);
extern void func_0A94B0(struct vec *v);
extern void func_0BCE00(float f);

void func_0BC3E8(void)
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

    func_09D198(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_001C90D0 + *(int *)(func_0A9458(&D_0027A198) + 0xD0) * 16);
    hit = func_024F50(0x9A, row->b0C) != 0;
    func_09CDF8(0.0f, 0x279, &r);
    func_098E80(func_096D10((int *)&r), r.h, func_10F330(0x2CD));
    func_09CDF8(0.0f, 0x27E, &r);
    func_0997E8(1.0f, 1.0f, r.w, r.h, func_10F330(0x1CA));
    func_09CDF8(0.0f, 0x278, &r);
    func_099138(1.0f, 1.0f, func_096D10((int *)&r), r.h, func_10F330(0x318));
    func_09CDF8(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_10F330(0x1C6);
    else
        label = func_10F330(0x1CB);
    func_098248(1.0f, 1.0f, lx, ly, label);
    func_09CDF8(0.0f, 0x272, &r);
    func_097FB0(r.x, r.h, func_10F330(0x1EE));
    if (!hit) {
        func_09CDF8(0.0f, 0x273, &r);
        sprintf(buf, D_001C90C0, row->w4);
        func_099590(r.w, r.h, buf);
        func_09CDF8(0.0f, 0x274, &r);
        func_09BC40(7, &r, 0xFFFFFFFF);
    }
    func_09CDF8(0.0f, 0x27B, &r);
    sprintf(buf, D_001C90C8, func_10F330(0x2D1));
    old = func_097380();
    func_097370(0);
    func_097FB0(r.x, r.h, buf);
    func_097370(old);
    val = ((int (*)(void))func_026010)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_097360(color);
    func_09CDF8(0.0f, 0x27D, &r);
    sprintf(buf, D_001C90C0, val);
    func_099590(r.w, r.h, buf);
    func_09CDF8(0.0f, 0x27C, &r);
    func_09BC40(7, &r, 0xFFFFFFFF);
    func_097360(0xFFFFFFFF);
    func_097370(0);
    func_0A94B0(&D_0027A198);
    func_097370(1);
    func_0BCE00(D_001B0B48);
}
