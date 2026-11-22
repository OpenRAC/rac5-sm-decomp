/* LEVEL_21:0x0AD330 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_00243958;
extern char D_00168980[];
extern char D_00168988[];
extern Row D_00168990[];
extern float D_00157918;

extern void func_08F370(float f, int id, unsigned int color);
extern int func_09AA50(struct vec *v);
extern unsigned int func_0214A0(int index, unsigned int bit);
extern int func_08EFD0(float f, int id, Rect *r);
extern int func_088F48(int *value);
extern char *func_0F1378(int id);
extern void func_08B058(short x, short y, char *s);
extern void func_08B9C0(float fx, float fy, short x, short y, char *s);
extern void func_08B310(float fx, float fy, short x, short y, char *s);
extern void func_08A420(float fx, float fy, short x, short y, char *s);
extern void func_08A188(short x, short y, char *s);
extern void func_08B768(short x, short y, char *s);
extern void func_08DE18(int index, void *rect, unsigned int color);
extern unsigned char func_089588(void);
extern void func_089578(unsigned char value);
extern void func_0222F8(void);
extern void func_089568(unsigned int value);
extern void func_09AAA8(struct vec *v);
extern void func_0ADD48(float f);

void func_0AD330(void)
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

    func_08F370(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_00168990 + *(int *)(func_09AA50(&D_00243958) + 0xD0) * 16);
    hit = func_0214A0(0x9A, row->b0C) != 0;
    func_08EFD0(0.0f, 0x279, &r);
    func_08B058(func_088F48((int *)&r), r.h, func_0F1378(0x2CD));
    func_08EFD0(0.0f, 0x27E, &r);
    func_08B9C0(1.0f, 1.0f, r.w, r.h, func_0F1378(0x1CA));
    func_08EFD0(0.0f, 0x278, &r);
    func_08B310(1.0f, 1.0f, func_088F48((int *)&r), r.h, func_0F1378(0x318));
    func_08EFD0(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_0F1378(0x1C6);
    else
        label = func_0F1378(0x1CB);
    func_08A420(1.0f, 1.0f, lx, ly, label);
    func_08EFD0(0.0f, 0x272, &r);
    func_08A188(r.x, r.h, func_0F1378(0x1EE));
    if (!hit) {
        func_08EFD0(0.0f, 0x273, &r);
        sprintf(buf, D_00168980, row->w4);
        func_08B768(r.w, r.h, buf);
        func_08EFD0(0.0f, 0x274, &r);
        func_08DE18(7, &r, 0xFFFFFFFF);
    }
    func_08EFD0(0.0f, 0x27B, &r);
    sprintf(buf, D_00168988, func_0F1378(0x2D1));
    old = func_089588();
    func_089578(0);
    func_08A188(r.x, r.h, buf);
    func_089578(old);
    val = ((int (*)(void))func_0222F8)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_089568(color);
    func_08EFD0(0.0f, 0x27D, &r);
    sprintf(buf, D_00168980, val);
    func_08B768(r.w, r.h, buf);
    func_08EFD0(0.0f, 0x27C, &r);
    func_08DE18(7, &r, 0xFFFFFFFF);
    func_089568(0xFFFFFFFF);
    func_089578(0);
    func_09AAA8(&D_00243958);
    func_089578(1);
    func_0ADD48(D_00157918);
}
