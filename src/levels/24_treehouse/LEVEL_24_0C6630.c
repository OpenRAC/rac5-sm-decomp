/* LEVEL_24:0x0C6630 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_002F7FD8;
extern char D_001E4F80[];
extern char D_001E4F88[];
extern Row D_001E4F90[];
extern float D_001D3918;

extern void func_0A8320(float f, int id, unsigned int color);
extern int func_0B3C98(struct vec *v);
extern unsigned int func_024DE0(int index, unsigned int bit);
extern int func_0A7F80(float f, int id, Rect *r);
extern int func_0A1EF8(int *value);
extern char *func_127FB0(int id);
extern void func_0A4008(short x, short y, char *s);
extern void func_0A4970(float fx, float fy, short x, short y, char *s);
extern void func_0A42C0(float fx, float fy, short x, short y, char *s);
extern void func_0A33D0(float fx, float fy, short x, short y, char *s);
extern void func_0A3138(short x, short y, char *s);
extern void func_0A4718(short x, short y, char *s);
extern void func_0A6DC8(int index, void *rect, unsigned int color);
extern unsigned char func_0A2538(void);
extern void func_0A2528(unsigned char value);
extern void func_025C78(void);
extern void func_0A2518(unsigned int value);
extern void func_0B3CF0(struct vec *v);
extern void func_0C7048(float f);

void func_0C6630(void)
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

    func_0A8320(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_001E4F90 + *(int *)(func_0B3C98(&D_002F7FD8) + 0xD0) * 16);
    hit = func_024DE0(0x9A, row->b0C) != 0;
    func_0A7F80(0.0f, 0x279, &r);
    func_0A4008(func_0A1EF8((int *)&r), r.h, func_127FB0(0x2CD));
    func_0A7F80(0.0f, 0x27E, &r);
    func_0A4970(1.0f, 1.0f, r.w, r.h, func_127FB0(0x1CA));
    func_0A7F80(0.0f, 0x278, &r);
    func_0A42C0(1.0f, 1.0f, func_0A1EF8((int *)&r), r.h, func_127FB0(0x318));
    func_0A7F80(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_127FB0(0x1C6);
    else
        label = func_127FB0(0x1CB);
    func_0A33D0(1.0f, 1.0f, lx, ly, label);
    func_0A7F80(0.0f, 0x272, &r);
    func_0A3138(r.x, r.h, func_127FB0(0x1EE));
    if (!hit) {
        func_0A7F80(0.0f, 0x273, &r);
        sprintf(buf, D_001E4F80, row->w4);
        func_0A4718(r.w, r.h, buf);
        func_0A7F80(0.0f, 0x274, &r);
        func_0A6DC8(7, &r, 0xFFFFFFFF);
    }
    func_0A7F80(0.0f, 0x27B, &r);
    sprintf(buf, D_001E4F88, func_127FB0(0x2D1));
    old = func_0A2538();
    func_0A2528(0);
    func_0A3138(r.x, r.h, buf);
    func_0A2528(old);
    val = ((int (*)(void))func_025C78)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0A2518(color);
    func_0A7F80(0.0f, 0x27D, &r);
    sprintf(buf, D_001E4F80, val);
    func_0A4718(r.w, r.h, buf);
    func_0A7F80(0.0f, 0x27C, &r);
    func_0A6DC8(7, &r, 0xFFFFFFFF);
    func_0A2518(0xFFFFFFFF);
    func_0A2528(0);
    func_0B3CF0(&D_002F7FD8);
    func_0A2528(1);
    func_0C7048(D_001D3918);
}
