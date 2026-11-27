/* LEVEL_19:0x125748 -- placement copy of LEVEL_16_124DE0.c: draws the two-bar meter screen: a gradient backdrop, the caption text and two filled bars sized from the saved gauge values. */
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

extern Gauge *D_001A2C34;
extern char D_001BE570[];
extern char D_001BA450[];

extern void func_09A4C0(float sx, float sy, float z, short x, short y, short w, short h, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3);
extern void func_0A8D88(char *s);
extern char *func_10F9D0(int id);
extern void func_11E5F8(char *text, char *font, int a, int b);
extern void func_09C688(int id, Rect *r, float f);
extern void func_0967B0(Rect *r, int a, int b);
extern int func_096600(Rect *r);

void func_125748(void)
{
    Rect r;
    int v;
    int d;

    func_09A4C0(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E);
    func_0A8D88(D_001BE570);
    func_11E5F8(func_10F9D0(0x786), D_001BA450, 1, 0);
    func_09C688(0x10C, &r, 0.0f);
    func_0967B0(&r, 1, 1);
    v = func_096600(&r);
    d = (short)(int)((float)v * ((float)D_001A2C34->gauge_a / 255.0f));
    r.x = r.x + 1;
    r.r = r.x - 1 + d + 1;
    func_09A4C0(1.0f, 1.0f, 0.0f, r.x, r.y, r.r, r.h, 0xFF00FF40, 0xFFB0FFE0, 0xFF00FF40, 0xFFB0FFE0);
    func_09C688(0x106, &r, 0.0f);
    func_0967B0(&r, 1, 1);
    v = func_096600(&r);
    d = (short)(int)((float)v * ((float)D_001A2C34->gauge_b / 255.0f));
    r.x = r.x + 1;
    r.r = r.x - 1 + d + 1;
    func_09A4C0(1.0f, 1.0f, 0.0f, r.x, r.y, r.r, r.h, 0xFF00FF40, 0xFFB0FFE0, 0xFF00FF40, 0xFFB0FFE0);
}
