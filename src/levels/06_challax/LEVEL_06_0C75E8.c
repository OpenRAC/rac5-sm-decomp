/* LEVEL_06:0x0C75E8 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_00318E98;
extern char D_00203080[];
extern char D_00203088[];
extern Row D_00203090[];
extern float D_001F1B98;

extern void func_0A9278(float f, int id, unsigned int color);
extern int func_0B4D08(struct vec *v);
extern unsigned int func_025960(int index, unsigned int bit);
extern int func_0A8ED8(float f, int id, Rect *r);
extern int func_0A2E50(int *value);
extern char *func_128B80(int id);
extern void func_0A4F60(short x, short y, char *s);
extern void func_0A58C8(float fx, float fy, short x, short y, char *s);
extern void func_0A5218(float fx, float fy, short x, short y, char *s);
extern void func_0A4328(float fx, float fy, short x, short y, char *s);
extern void func_0A4090(short x, short y, char *s);
extern void func_0A5670(short x, short y, char *s);
extern void func_0A7D20(int index, void *rect, unsigned int color);
extern unsigned char func_0A3490(void);
extern void func_0A3480(unsigned char value);
extern void func_026AA0(void);
extern void func_0A3470(unsigned int value);
extern void func_0B4D60(struct vec *v);
extern void func_0C8000(float f);

void func_0C75E8(void)
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

    func_0A9278(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_00203090 + *(int *)(func_0B4D08(&D_00318E98) + 0xD0) * 16);
    hit = func_025960(0x9A, row->b0C) != 0;
    func_0A8ED8(0.0f, 0x279, &r);
    func_0A4F60(func_0A2E50((int *)&r), r.h, func_128B80(0x2CD));
    func_0A8ED8(0.0f, 0x27E, &r);
    func_0A58C8(1.0f, 1.0f, r.w, r.h, func_128B80(0x1CA));
    func_0A8ED8(0.0f, 0x278, &r);
    func_0A5218(1.0f, 1.0f, func_0A2E50((int *)&r), r.h, func_128B80(0x318));
    func_0A8ED8(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_128B80(0x1C6);
    else
        label = func_128B80(0x1CB);
    func_0A4328(1.0f, 1.0f, lx, ly, label);
    func_0A8ED8(0.0f, 0x272, &r);
    func_0A4090(r.x, r.h, func_128B80(0x1EE));
    if (!hit) {
        func_0A8ED8(0.0f, 0x273, &r);
        sprintf(buf, D_00203080, row->w4);
        func_0A5670(r.w, r.h, buf);
        func_0A8ED8(0.0f, 0x274, &r);
        func_0A7D20(7, &r, 0xFFFFFFFF);
    }
    func_0A8ED8(0.0f, 0x27B, &r);
    sprintf(buf, D_00203088, func_128B80(0x2D1));
    old = func_0A3490();
    func_0A3480(0);
    func_0A4090(r.x, r.h, buf);
    func_0A3480(old);
    val = ((int (*)(void))func_026AA0)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_0A3470(color);
    func_0A8ED8(0.0f, 0x27D, &r);
    sprintf(buf, D_00203080, val);
    func_0A5670(r.w, r.h, buf);
    func_0A8ED8(0.0f, 0x27C, &r);
    func_0A7D20(7, &r, 0xFFFFFFFF);
    func_0A3470(0xFFFFFFFF);
    func_0A3480(0);
    func_0B4D60(&D_00318E98);
    func_0A3480(1);
    func_0C8000(D_001F1B98);
}
