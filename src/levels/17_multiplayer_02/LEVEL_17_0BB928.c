/* LEVEL_17:0x0BB928 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_0026B498;
extern char D_001BC540[];
extern char D_001BC548[];
extern Row D_001BC550[];
extern float D_001A4148;

extern void func_09C690(float f, int id, unsigned int color);
extern int func_0A8998(struct vec *v);
extern unsigned int func_0248D0(int index, unsigned int bit);
extern int func_09C2F0(float f, int id, Rect *r);
extern int func_096208(int *value);
extern char *func_10E8A8(int id);
extern void func_098378(short x, short y, char *s);
extern void func_098CE0(float fx, float fy, short x, short y, char *s);
extern void func_098630(float fx, float fy, short x, short y, char *s);
extern void func_097740(float fx, float fy, short x, short y, char *s);
extern void func_0974A8(short x, short y, char *s);
extern void func_098A88(short x, short y, char *s);
extern void func_09B138(int index, void *rect, unsigned int color);
extern unsigned char func_096878(void);
extern void func_096868(unsigned char value);
extern void func_025990(void);
extern void func_096858(unsigned int value);
extern void func_0A89F0(struct vec *v);
extern void func_0BC340(float f);

void func_0BB928(void)
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

    func_09C690(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_001BC550 + *(int *)(func_0A8998(&D_0026B498) + 0xD0) * 16);
    hit = func_0248D0(0x9A, row->b0C) != 0;
    func_09C2F0(0.0f, 0x279, &r);
    func_098378(func_096208((int *)&r), r.h, func_10E8A8(0x2CD));
    func_09C2F0(0.0f, 0x27E, &r);
    func_098CE0(1.0f, 1.0f, r.w, r.h, func_10E8A8(0x1CA));
    func_09C2F0(0.0f, 0x278, &r);
    func_098630(1.0f, 1.0f, func_096208((int *)&r), r.h, func_10E8A8(0x318));
    func_09C2F0(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_10E8A8(0x1C6);
    else
        label = func_10E8A8(0x1CB);
    func_097740(1.0f, 1.0f, lx, ly, label);
    func_09C2F0(0.0f, 0x272, &r);
    func_0974A8(r.x, r.h, func_10E8A8(0x1EE));
    if (!hit) {
        func_09C2F0(0.0f, 0x273, &r);
        sprintf(buf, D_001BC540, row->w4);
        func_098A88(r.w, r.h, buf);
        func_09C2F0(0.0f, 0x274, &r);
        func_09B138(7, &r, 0xFFFFFFFF);
    }
    func_09C2F0(0.0f, 0x27B, &r);
    sprintf(buf, D_001BC548, func_10E8A8(0x2D1));
    old = func_096878();
    func_096868(0);
    func_0974A8(r.x, r.h, buf);
    func_096868(old);
    val = ((int (*)(void))func_025990)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_096858(color);
    func_09C2F0(0.0f, 0x27D, &r);
    sprintf(buf, D_001BC540, val);
    func_098A88(r.w, r.h, buf);
    func_09C2F0(0.0f, 0x27C, &r);
    func_09B138(7, &r, 0xFFFFFFFF);
    func_096858(0xFFFFFFFF);
    func_096868(0);
    func_0A89F0(&D_0026B498);
    func_096868(1);
    func_0BC340(D_001A4148);
}
