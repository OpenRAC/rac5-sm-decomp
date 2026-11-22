/* LEVEL_23:0x0C3B20 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_002FD558;
extern char D_001E7380[];
extern char D_001E7388[];
extern Row D_001E7390[];
extern float D_001D6098;

extern void func_0A5818(float f, int id, unsigned int color);
extern int func_0B11A0(struct vec *v);
extern unsigned int func_025208(int index, unsigned int bit);
extern int func_0A5478(float f, int id, Rect *r);
extern int func_09F3F0(int *value);
extern char *func_123C28(int id);
extern void func_0A1500(short x, short y, char *s);
extern void func_0A1E68(float fx, float fy, short x, short y, char *s);
extern void func_0A17B8(float fx, float fy, short x, short y, char *s);
extern void func_0A08C8(float fx, float fy, short x, short y, char *s);
extern void func_0A0630(short x, short y, char *s);
extern void func_0A1C10(short x, short y, char *s);
extern void func_0A42C0(int index, void *rect, unsigned int color);
extern unsigned char func_09FA30(void);
extern void func_09FA20(unsigned char value);
extern void func_026220(void);
extern void func_09FA10(unsigned int value);
extern void func_0B11F8(struct vec *v);
extern void func_0C4538(float f);

void func_0C3B20(void)
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

    func_0A5818(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_001E7390 + *(int *)(func_0B11A0(&D_002FD558) + 0xD0) * 16);
    hit = func_025208(0x9A, row->b0C) != 0;
    func_0A5478(0.0f, 0x279, &r);
    func_0A1500(func_09F3F0((int *)&r), r.h, func_123C28(0x2CD));
    func_0A5478(0.0f, 0x27E, &r);
    func_0A1E68(1.0f, 1.0f, r.w, r.h, func_123C28(0x1CA));
    func_0A5478(0.0f, 0x278, &r);
    func_0A17B8(1.0f, 1.0f, func_09F3F0((int *)&r), r.h, func_123C28(0x318));
    func_0A5478(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_123C28(0x1C6);
    else
        label = func_123C28(0x1CB);
    func_0A08C8(1.0f, 1.0f, lx, ly, label);
    func_0A5478(0.0f, 0x272, &r);
    func_0A0630(r.x, r.h, func_123C28(0x1EE));
    if (!hit) {
        func_0A5478(0.0f, 0x273, &r);
        sprintf(buf, D_001E7380, row->w4);
        func_0A1C10(r.w, r.h, buf);
        func_0A5478(0.0f, 0x274, &r);
        func_0A42C0(7, &r, 0xFFFFFFFF);
    }
    func_0A5478(0.0f, 0x27B, &r);
    sprintf(buf, D_001E7388, func_123C28(0x2D1));
    old = func_09FA30();
    func_09FA20(0);
    func_0A0630(r.x, r.h, buf);
    func_09FA20(old);
    val = ((int (*)(void))func_026220)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_09FA10(color);
    func_0A5478(0.0f, 0x27D, &r);
    sprintf(buf, D_001E7380, val);
    func_0A1C10(r.w, r.h, buf);
    func_0A5478(0.0f, 0x27C, &r);
    func_0A42C0(7, &r, 0xFFFFFFFF);
    func_09FA10(0xFFFFFFFF);
    func_09FA20(0);
    func_0B11F8(&D_002FD558);
    func_09FA20(1);
    func_0C4538(D_001D6098);
}
