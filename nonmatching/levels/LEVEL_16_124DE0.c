/* USA LEVEL_16.REL:0x124DE0, 592-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 5 differing words; first difference at 0x1F0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

extern Gauge *D_001A1AB4;
extern char D_001BD3F8[];
extern char D_001B92D8[];

extern void func_09AC30(int x, int y, int w, int h, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float sx, float sy, float z);
extern void func_0A94B0(char *s);
extern char *func_10F330(int id);
extern void func_11DC90(char *text, char *font, int a, int b);
extern void func_09CDF8(int id, Rect *r, float f);
extern void func_096F20(Rect *r, int a, int b);
extern int func_096D70(Rect *r);

void func_124DE0(void)
{
    Rect r;
    int v;
    int d;

    func_09AC30(0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E, 1.0f, 1.0f, 0.0f);
    func_0A94B0(D_001BD3F8);
    func_11DC90(func_10F330(0x786), D_001B92D8, 1, 0);
    func_09CDF8(0x10C, &r, 0.0f);
    func_096F20(&r, 1, 1);
    v = func_096D70(&r);
    d = (short)(int)((float)v * ((float)D_001A1AB4->gauge_a / 255.0f));
    r.x = r.x + 1;
    r.r = r.x - 1 + d + 1;
    func_09AC30((short)r.x, (short)r.y, (short)r.r, (short)r.h, 0xFF00FF40, 0xFFB0FFE0, 0xFF00FF40, 0xFFB0FFE0, 1.0f, 1.0f, 0.0f);
    func_09CDF8(0x106, &r, 0.0f);
    func_096F20(&r, 1, 1);
    v = func_096D70(&r);
    d = (short)(int)((float)v * ((float)D_001A1AB4->gauge_b / 255.0f));
    r.x = r.x + 1;
    r.r = r.x - 1 + d + 1;
    func_09AC30((short)r.x, (short)r.y, (short)r.r, (short)r.h, 0xFF00FF40, 0xFFB0FFE0, 0xFF00FF40, 0xFFB0FFE0, 1.0f, 1.0f, 0.0f);
}
