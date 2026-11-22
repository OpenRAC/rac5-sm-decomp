/* LEVEL_04:0x0D2580 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_00346918;
extern char D_0022DB80[];
extern char D_0022DB88[];
extern Row D_0022DB90[];
extern float D_0021C158;

extern void func_0B3CF8(float f, int id, unsigned int color);
extern int func_0BFBE8(struct vec *v);
extern unsigned int func_027140(int index, unsigned int bit);
extern int func_0B3958(float f, int id, Rect *r);
extern int func_0AD890(int *value);
extern char *func_13E930(int id);
extern void func_0AF9E0(short x, short y, char *s);
extern void func_0B0348(float fx, float fy, short x, short y, char *s);
extern void func_0AFC98(float fx, float fy, short x, short y, char *s);
extern void func_0AEDA8(float fx, float fy, short x, short y, char *s);
extern void func_0AEB10(short x, short y, char *s);
extern void func_0B00F0(short x, short y, char *s);
extern void func_0B27A0(int index, void *rect, unsigned int color);
extern unsigned char func_0ADF10(void);
extern void func_0ADF00(unsigned char value);
extern void func_028158(void);
extern void func_0ADEF0(unsigned int value);
extern void func_0BFC40(struct vec *v);
extern void func_0D2F98(float f);

void func_0D2580(void)
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

    func_0B3CF8(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_0022DB90 + *(int *)(func_0BFBE8(&D_00346918) + 0xD0) * 16);
    hit = func_027140(0x9A, row->b0C) != 0;
    func_0B3958(0.0f, 0x279, &r);
    func_0AF9E0(func_0AD890((int *)&r), r.h, func_13E930(0x2CD));
    func_0B3958(0.0f, 0x27E, &r);
    func_0B0348(1.0f, 1.0f, r.w, r.h, func_13E930(0x1CA));
    func_0B3958(0.0f, 0x278, &r);
    func_0AFC98(1.0f, 1.0f, func_0AD890((int *)&r), r.h, func_13E930(0x318));
    func_0B3958(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_13E930(0x1C6);
    else
        label = func_13E930(0x1CB);
    func_0AEDA8(1.0f, 1.0f, lx, ly, label);
    func_0B3958(0.0f, 0x272, &r);
    func_0AEB10(r.x, r.h, func_13E930(0x1EE));
    if (!hit) {
        func_0B3958(0.0f, 0x273, &r);
        sprintf(buf, D_0022DB80, row->w4);
        func_0B00F0(r.w, r.h, buf);
        func_0B3958(0.0f, 0x274, &r);
        func_0B27A0(7, &r, 0xFFFFFFFF);
    }
    func_0B3958(0.0f, 0x27B, &r);
    sprintf(buf, D_0022DB88, func_13E930(0x2D1));
    old = func_0ADF10();
    func_0ADF00(0);
    func_0AEB10(r.x, r.h, buf);
    func_0ADF00(old);
    val = ((int (*)(void))func_028158)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0ADEF0(color);
    func_0B3958(0.0f, 0x27D, &r);
    sprintf(buf, D_0022DB80, val);
    func_0B00F0(r.w, r.h, buf);
    func_0B3958(0.0f, 0x27C, &r);
    func_0B27A0(7, &r, 0xFFFFFFFF);
    func_0ADEF0(0xFFFFFFFF);
    func_0ADF00(0);
    func_0BFC40(&D_00346918);
    func_0ADF00(1);
    func_0D2F98(D_0021C158);
}
