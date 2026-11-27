/* LEVEL_20:0x0F6EE0 -- placement copy of LEVEL_16_124DE0.c: draws the two-bar meter screen: a gradient backdrop, the caption text and two filled bars sized from the saved gauge values. */
typedef struct {
    int x;
    int y;
    int r;
    int h;
} Rect;

typedef struct {
    char pad_00[0x18];
    int gauge_a;
    int gauge_b;
} Gauge;

extern Gauge *D_00104194;
extern char D_0011FA98[];
extern char D_0011B978[];

extern void func_085328(float sx, float sy, float z, short x, short y, short w, short h, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3);
extern void func_0939E0(char *s);
extern char *func_0E2118(int id);
extern void func_0EFD90(char *text, char *font, int a, int b);
extern void func_0874F0(int id, Rect *r, float f);
extern void func_081618(Rect *r, int a, int b);
extern int func_081468(Rect *r);

void func_0F6EE0(void)
{
    Rect r;
    int v;
    int d;

    func_085328(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E);
    func_0939E0(D_0011FA98);
    func_0EFD90(func_0E2118(0x786), D_0011B978, 1, 0);
    func_0874F0(0x10C, &r, 0.0f);
    func_081618(&r, 1, 1);
    v = func_081468(&r);
    d = (short)(int)((float)v * ((float)D_00104194->gauge_a / 255.0f));
    r.x = r.x + 1;
    r.r = r.x - 1 + d + 1;
    func_085328(1.0f, 1.0f, 0.0f, r.x, r.y, r.r, r.h, 0xFF00FF40, 0xFFB0FFE0, 0xFF00FF40, 0xFFB0FFE0);
    func_0874F0(0x106, &r, 0.0f);
    func_081618(&r, 1, 1);
    v = func_081468(&r);
    d = (short)(int)((float)v * ((float)D_00104194->gauge_b / 255.0f));
    r.x = r.x + 1;
    r.r = r.x - 1 + d + 1;
    func_085328(1.0f, 1.0f, 0.0f, r.x, r.y, r.r, r.h, 0xFF00FF40, 0xFFB0FFE0, 0xFF00FF40, 0xFFB0FFE0);
}
