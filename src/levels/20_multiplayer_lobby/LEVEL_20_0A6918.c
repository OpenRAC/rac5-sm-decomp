/* LEVEL_20:0x0A6918 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_0019D9D8;
extern char D_0012A140[];
extern char D_0012A148[];
extern Row D_0012A150[];
extern float D_00113228;

extern void func_087890(float f, int id, unsigned int color);
extern int func_093988(struct vec *v);
extern unsigned int func_021AC8(int index, unsigned int bit);
extern int func_0874F0(float f, int id, Rect *r);
extern int func_081408(int *value);
extern char *func_0E2118(int id);
extern void func_083578(short x, short y, char *s);
extern void func_083EE0(float fx, float fy, short x, short y, char *s);
extern void func_083830(float fx, float fy, short x, short y, char *s);
extern void func_082940(float fx, float fy, short x, short y, char *s);
extern void func_0826A8(short x, short y, char *s);
extern void func_083C88(short x, short y, char *s);
extern void func_086338(int index, void *rect, unsigned int color);
extern unsigned char func_081A78(void);
extern void func_081A68(unsigned char value);
extern void func_022B30(void);
extern void func_081A58(unsigned int value);
extern void func_0939E0(struct vec *v);
extern void func_0A7330(float f);

void func_0A6918(void)
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

    func_087890(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_0012A150 + *(int *)(func_093988(&D_0019D9D8) + 0xD0) * 16);
    hit = func_021AC8(0x9A, row->b0C) != 0;
    func_0874F0(0.0f, 0x279, &r);
    func_083578(func_081408((int *)&r), r.h, func_0E2118(0x2CD));
    func_0874F0(0.0f, 0x27E, &r);
    func_083EE0(1.0f, 1.0f, r.w, r.h, func_0E2118(0x1CA));
    func_0874F0(0.0f, 0x278, &r);
    func_083830(1.0f, 1.0f, func_081408((int *)&r), r.h, func_0E2118(0x318));
    func_0874F0(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_0E2118(0x1C6);
    else
        label = func_0E2118(0x1CB);
    func_082940(1.0f, 1.0f, lx, ly, label);
    func_0874F0(0.0f, 0x272, &r);
    func_0826A8(r.x, r.h, func_0E2118(0x1EE));
    if (!hit) {
        func_0874F0(0.0f, 0x273, &r);
        sprintf(buf, D_0012A140, row->w4);
        func_083C88(r.w, r.h, buf);
        func_0874F0(0.0f, 0x274, &r);
        func_086338(7, &r, 0xFFFFFFFF);
    }
    func_0874F0(0.0f, 0x27B, &r);
    sprintf(buf, D_0012A148, func_0E2118(0x2D1));
    old = func_081A78();
    func_081A68(0);
    func_0826A8(r.x, r.h, buf);
    func_081A68(old);
    val = ((int (*)(void))func_022B30)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_081A58(color);
    func_0874F0(0.0f, 0x27D, &r);
    sprintf(buf, D_0012A140, val);
    func_083C88(r.w, r.h, buf);
    func_0874F0(0.0f, 0x27C, &r);
    func_086338(7, &r, 0xFFFFFFFF);
    func_081A58(0xFFFFFFFF);
    func_081A68(0);
    func_0939E0(&D_0019D9D8);
    func_081A68(1);
    func_0A7330(D_00113228);
}
