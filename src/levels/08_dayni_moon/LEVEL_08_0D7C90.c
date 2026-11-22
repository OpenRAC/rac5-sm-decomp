/* LEVEL_08:0x0D7C90 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_0037B398;
extern char D_0025DE80[];
extern char D_0025DE88[];
extern Row D_0025DE90[];
extern float D_0024BB58;

extern void func_0B93E0(float f, int id, unsigned int color);
extern int func_0C52F8(struct vec *v);
extern unsigned int func_027AD8(int index, unsigned int bit);
extern int func_0B9040(float f, int id, Rect *r);
extern int func_0B2F78(int *value);
extern char *func_1439E8(int id);
extern void func_0B50C8(short x, short y, char *s);
extern void func_0B5A30(float fx, float fy, short x, short y, char *s);
extern void func_0B5380(float fx, float fy, short x, short y, char *s);
extern void func_0B4490(float fx, float fy, short x, short y, char *s);
extern void func_0B41F8(short x, short y, char *s);
extern void func_0B57D8(short x, short y, char *s);
extern void func_0B7E88(int index, void *rect, unsigned int color);
extern unsigned char func_0B35F8(void);
extern void func_0B35E8(unsigned char value);
extern void func_028B18(void);
extern void func_0B35D8(unsigned int value);
extern void func_0C5350(struct vec *v);
extern void func_0D86A8(float f);

void func_0D7C90(void)
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

    func_0B93E0(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_0025DE90 + *(int *)(func_0C52F8(&D_0037B398) + 0xD0) * 16);
    hit = func_027AD8(0x9A, row->b0C) != 0;
    func_0B9040(0.0f, 0x279, &r);
    func_0B50C8(func_0B2F78((int *)&r), r.h, func_1439E8(0x2CD));
    func_0B9040(0.0f, 0x27E, &r);
    func_0B5A30(1.0f, 1.0f, r.w, r.h, func_1439E8(0x1CA));
    func_0B9040(0.0f, 0x278, &r);
    func_0B5380(1.0f, 1.0f, func_0B2F78((int *)&r), r.h, func_1439E8(0x318));
    func_0B9040(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_1439E8(0x1C6);
    else
        label = func_1439E8(0x1CB);
    func_0B4490(1.0f, 1.0f, lx, ly, label);
    func_0B9040(0.0f, 0x272, &r);
    func_0B41F8(r.x, r.h, func_1439E8(0x1EE));
    if (!hit) {
        func_0B9040(0.0f, 0x273, &r);
        sprintf(buf, D_0025DE80, row->w4);
        func_0B57D8(r.w, r.h, buf);
        func_0B9040(0.0f, 0x274, &r);
        func_0B7E88(7, &r, 0xFFFFFFFF);
    }
    func_0B9040(0.0f, 0x27B, &r);
    sprintf(buf, D_0025DE88, func_1439E8(0x2D1));
    old = func_0B35F8();
    func_0B35E8(0);
    func_0B41F8(r.x, r.h, buf);
    func_0B35E8(old);
    val = ((int (*)(void))func_028B18)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0B35D8(color);
    func_0B9040(0.0f, 0x27D, &r);
    sprintf(buf, D_0025DE80, val);
    func_0B57D8(r.w, r.h, buf);
    func_0B9040(0.0f, 0x27C, &r);
    func_0B7E88(7, &r, 0xFFFFFFFF);
    func_0B35D8(0xFFFFFFFF);
    func_0B35E8(0);
    func_0C5350(&D_0037B398);
    func_0B35E8(1);
    func_0D86A8(D_0024BB58);
}
