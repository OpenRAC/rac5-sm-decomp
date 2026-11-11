/* LEVEL_20:0x0EB738 -- placement copy of LEVEL_16_119390.c: draws a seven-label panel and a four-row table of names and six numbers each, then offers the current row. */
typedef struct {
    short a, a2;
    unsigned short b, b2;
    short c, c2;
    unsigned short d, d2;
} Rect;

typedef struct {
    int f00, f04, f08, f0C, f10, f14;
    char pad18[0x28];
    char name[0x80];
} Entry;

extern Entry D_00204668[];
extern char D_00130CF8[];
extern char D_002045E8[];
extern void func_0874F0(int, Rect *, float);
extern Rect func_0EB330(int);
extern Rect func_0EB430(int, int);
extern int func_081408(Rect *);
extern void func_083578(int, int, char *);
extern void func_0826A8(int, int, char *);
extern void func_085328(float xscale, float yscale, int x, int y, int right, int bottom,
                        unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float zero);
extern int func_0E2118(int);
extern void func_082940(int, int, int, float, float);
extern int func_0E7EE0(void);
extern int func_096550(void);
extern void func_095360(char *, int);
extern int sprintf(char *, const char *, ...);

#define ROW(k, id) \
    tmp = func_0EB330(k); \
    r = tmp; \
    func_085328(1.0f, 1.0f, box.a, (short)r.b, box.c, (short)r.d, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f); \
    func_082940(r.a, (short)r.d, func_0E2118(id), 1.0f, 1.0f);

#define CELL(k, field) \
    sprintf(text, D_00130CF8, D_00204668[i].field); \
    tmp = func_0EB430(k, i); \
    r = tmp; \
    func_0826A8(r.a, (short)r.d, text);

void func_0EB738(void)
{
    Rect r, box, tmp;
    char text[32];
    unsigned int i;

    func_0874F0(0x238, &box, 0.0f);
    ROW(1, 0x257)
    ROW(2, 0x258)
    ROW(3, 0x259)
    ROW(4, 0x25A)
    ROW(5, 0x25B)
    ROW(6, 0x25C)
    ROW(7, 0x25D)
    for (i = 0; i < 4; i++) {
        if (D_00204668[i].name[0] != 0) {
            tmp = func_0EB430(0, i);
            r = tmp;
            func_083578((short)func_081408(&r), (short)r.d, D_00204668[i].name);
            CELL(1, f00)
            CELL(2, f04)
            CELL(3, f08)
            CELL(4, f0C)
            CELL(5, f10)
            CELL(6, f14)
        }
    }
    tmp = func_0EB430(7, 0);
    r = tmp;
    func_0826A8(r.a, (short)r.d, D_002045E8);
    if (func_0E7EE0() == 0)
        func_095360(D_00204668[func_096550()].name, 10);
}
