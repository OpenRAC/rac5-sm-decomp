/* LEVEL_03:0x0CCAD0 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_00346F98;
extern char D_0022D100[];
extern char D_0022D108[];
extern Row D_0022D110[];
extern float D_0021B318;

extern void func_0AE828(float f, int id, unsigned int color);
extern int func_0BA1F0(struct vec *v);
extern unsigned int func_027390(int index, unsigned int bit);
extern int func_0AE488(float f, int id, Rect *r);
extern int func_0A8400(int *value);
extern char *func_130878(int id);
extern void func_0AA510(short x, short y, char *s);
extern void func_0AAE78(float fx, float fy, short x, short y, char *s);
extern void func_0AA7C8(float fx, float fy, short x, short y, char *s);
extern void func_0A98D8(float fx, float fy, short x, short y, char *s);
extern void func_0A9640(short x, short y, char *s);
extern void func_0AAC20(short x, short y, char *s);
extern void func_0AD2D0(int index, void *rect, unsigned int color);
extern unsigned char func_0A8A40(void);
extern void func_0A8A30(unsigned char value);
extern void func_0283D0(void);
extern void func_0A8A20(unsigned int value);
extern void func_0BA248(struct vec *v);
extern void func_0CD4E8(float f);

void func_0CCAD0(void)
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

    func_0AE828(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_0022D110 + *(int *)(func_0BA1F0(&D_00346F98) + 0xD0) * 16);
    hit = func_027390(0x9A, row->b0C) != 0;
    func_0AE488(0.0f, 0x279, &r);
    func_0AA510(func_0A8400((int *)&r), r.h, func_130878(0x2CD));
    func_0AE488(0.0f, 0x27E, &r);
    func_0AAE78(1.0f, 1.0f, r.w, r.h, func_130878(0x1CA));
    func_0AE488(0.0f, 0x278, &r);
    func_0AA7C8(1.0f, 1.0f, func_0A8400((int *)&r), r.h, func_130878(0x318));
    func_0AE488(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_130878(0x1C6);
    else
        label = func_130878(0x1CB);
    func_0A98D8(1.0f, 1.0f, lx, ly, label);
    func_0AE488(0.0f, 0x272, &r);
    func_0A9640(r.x, r.h, func_130878(0x1EE));
    if (!hit) {
        func_0AE488(0.0f, 0x273, &r);
        sprintf(buf, D_0022D100, row->w4);
        func_0AAC20(r.w, r.h, buf);
        func_0AE488(0.0f, 0x274, &r);
        func_0AD2D0(7, &r, 0xFFFFFFFF);
    }
    func_0AE488(0.0f, 0x27B, &r);
    sprintf(buf, D_0022D108, func_130878(0x2D1));
    old = func_0A8A40();
    func_0A8A30(0);
    func_0A9640(r.x, r.h, buf);
    func_0A8A30(old);
    val = ((int (*)(void))func_0283D0)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0A8A20(color);
    func_0AE488(0.0f, 0x27D, &r);
    sprintf(buf, D_0022D100, val);
    func_0AAC20(r.w, r.h, buf);
    func_0AE488(0.0f, 0x27C, &r);
    func_0AD2D0(7, &r, 0xFFFFFFFF);
    func_0A8A20(0xFFFFFFFF);
    func_0A8A30(0);
    func_0BA248(&D_00346F98);
    func_0A8A30(1);
    func_0CD4E8(D_0021B318);
}
