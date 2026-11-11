/* LEVEL_16:0x119390 -- draws a seven-label panel and a four-row table of names and six numbers each, then offers the current row. */
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

extern Entry D_002E1110[];
extern char D_001CFC88[];
extern char D_002E1090[];
extern void func_09CDF8(int, Rect *, float);
extern Rect func_118F88(int);
extern Rect func_119088(int, int);
extern int func_096D10(Rect *);
extern void func_098E80(int, int, char *);
extern void func_097FB0(int, int, char *);
extern void func_09AC30(float xscale, float yscale, int x, int y, int right, int bottom,
                        unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float zero);
extern int func_10F330(int);
extern void func_098248(int, int, int, float, float);
extern int func_1155E0(void);
extern int func_0AC020(void);
extern void func_0AAE30(char *, int);
extern int sprintf(char *, const char *, ...);

#define ROW(k, id) \
    tmp = func_118F88(k); \
    r = tmp; \
    func_09AC30(1.0f, 1.0f, box.a, (short)r.b, box.c, (short)r.d, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f); \
    func_098248(r.a, (short)r.d, func_10F330(id), 1.0f, 1.0f);

#define CELL(k, field) \
    sprintf(text, D_001CFC88, D_002E1110[i].field); \
    tmp = func_119088(k, i); \
    r = tmp; \
    func_097FB0(r.a, (short)r.d, text);

void func_119390(void)
{
    Rect r, box, tmp;
    char text[32];
    unsigned int i;

    func_09CDF8(0x238, &box, 0.0f);
    ROW(1, 0x257)
    ROW(2, 0x258)
    ROW(3, 0x259)
    ROW(4, 0x25A)
    ROW(5, 0x25B)
    ROW(6, 0x25C)
    ROW(7, 0x25D)
    for (i = 0; i < 4; i++) {
        if (D_002E1110[i].name[0] != 0) {
            tmp = func_119088(0, i);
            r = tmp;
            func_098E80((short)func_096D10(&r), (short)r.d, D_002E1110[i].name);
            CELL(1, f00)
            CELL(2, f04)
            CELL(3, f08)
            CELL(4, f0C)
            CELL(5, f10)
            CELL(6, f14)
        }
    }
    tmp = func_119088(7, 0);
    r = tmp;
    func_097FB0(r.a, (short)r.d, D_002E1090);
    if (func_1155E0() == 0)
        func_0AAE30(D_002E1110[func_0AC020()].name, 10);
}
