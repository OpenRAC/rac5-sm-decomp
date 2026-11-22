/* LEVEL_18:0x0BB3C0 -- placement copy of LEVEL_01_0CCCE8.c: draws one entry of a two-column menu: looks up the current table row, lays out its labels and values with the text helpers, then prints the stored value. */
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

extern struct vec D_0027A518;
extern char D_001CA640[];
extern char D_001CA648[];
extern Row D_001CA650[];
extern float D_001B1FC8;

extern void func_09C1A8(float f, int id, unsigned int color);
extern int func_0A8430(struct vec *v);
extern unsigned int func_024500(int index, unsigned int bit);
extern int func_09BE08(float f, int id, Rect *r);
extern int func_095D20(int *value);
extern char *func_10DFE0(int id);
extern void func_097E90(short x, short y, char *s);
extern void func_0987F8(float fx, float fy, short x, short y, char *s);
extern void func_098148(float fx, float fy, short x, short y, char *s);
extern void func_097258(float fx, float fy, short x, short y, char *s);
extern void func_096FC0(short x, short y, char *s);
extern void func_0985A0(short x, short y, char *s);
extern void func_09AC50(int index, void *rect, unsigned int color);
extern unsigned char func_096390(void);
extern void func_096380(unsigned char value);
extern void func_0255C0(void);
extern void func_096370(unsigned int value);
extern void func_0A8488(struct vec *v);
extern void func_0BBDD8(float f);

void func_0BB3C0(void)
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

    func_09C1A8(0.0f, 0x41, 0xFFFFFFFF);
    row = (Row *)((char *)D_001CA650 + *(int *)(func_0A8430(&D_0027A518) + 0xD0) * 16);
    hit = func_024500(0x9A, row->b0C) != 0;
    func_09BE08(0.0f, 0x279, &r);
    func_097E90(func_095D20((int *)&r), r.h, func_10DFE0(0x2CD));
    func_09BE08(0.0f, 0x27E, &r);
    func_0987F8(1.0f, 1.0f, r.w, r.h, func_10DFE0(0x1CA));
    func_09BE08(0.0f, 0x278, &r);
    func_098148(1.0f, 1.0f, func_095D20((int *)&r), r.h, func_10DFE0(0x318));
    func_09BE08(0.0f, 0x275, &r);
    lx = r.x;
    ly = r.h;
    if (hit)
        label = func_10DFE0(0x1C6);
    else
        label = func_10DFE0(0x1CB);
    func_097258(1.0f, 1.0f, lx, ly, label);
    func_09BE08(0.0f, 0x272, &r);
    func_096FC0(r.x, r.h, func_10DFE0(0x1EE));
    if (!hit) {
        func_09BE08(0.0f, 0x273, &r);
        sprintf(buf, D_001CA640, row->w4);
        func_0985A0(r.w, r.h, buf);
        func_09BE08(0.0f, 0x274, &r);
        func_09AC50(7, &r, 0xFFFFFFFF);
    }
    func_09BE08(0.0f, 0x27B, &r);
    sprintf(buf, D_001CA648, func_10DFE0(0x2D1));
    old = func_096390();
    func_096380(0);
    func_096FC0(r.x, r.h, buf);
    func_096380(old);
    val = ((int (*)(void))func_0255C0)();
    if (val >= row->w4 || hit)
        color = 0xFFFFFFFF;
    else
        color = 0xFF6060D0;
    func_096370(color);
    func_09BE08(0.0f, 0x27D, &r);
    sprintf(buf, D_001CA640, val);
    func_0985A0(r.w, r.h, buf);
    func_09BE08(0.0f, 0x27C, &r);
    func_09AC50(7, &r, 0xFFFFFFFF);
    func_096370(0xFFFFFFFF);
    func_096380(0);
    func_0A8488(&D_0027A518);
    func_096380(1);
    func_0BBDD8(D_001B1FC8);
}
