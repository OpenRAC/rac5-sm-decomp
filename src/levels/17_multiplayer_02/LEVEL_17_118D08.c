/* LEVEL_17:0x118D08 -- placement copy of LEVEL_16_119390.c: draws a seven-label panel and a four-row table of names and six numbers each, then offers the current row. */
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

extern Entry D_002D2410[];
extern char D_001C3108[];
extern char D_002D2390[];
extern void func_09C2F0(int, Rect *, float);
extern Rect func_118900(int);
extern Rect func_118A00(int, int);
extern int func_096208(Rect *);
extern void func_098378(int, int, char *);
extern void func_0974A8(int, int, char *);
extern void func_09A128(float xscale, float yscale, int x, int y, int right, int bottom,
                        unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float zero);
extern int func_10E8A8(int);
extern void func_097740(int, int, int, float, float);
extern int func_114D40(void);
extern int func_0AB560(void);
extern void func_0AA370(char *, int);
extern int sprintf(char *, const char *, ...);

#define ROW(k, id) \
    tmp = func_118900(k); \
    r = tmp; \
    func_09A128(1.0f, 1.0f, box.a, (short)r.b, box.c, (short)r.d, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f); \
    func_097740(r.a, (short)r.d, func_10E8A8(id), 1.0f, 1.0f);

#define CELL(k, field) \
    sprintf(text, D_001C3108, D_002D2410[i].field); \
    tmp = func_118A00(k, i); \
    r = tmp; \
    func_0974A8(r.a, (short)r.d, text);

void func_118D08(void)
{
    Rect r, box, tmp;
    char text[32];
    unsigned int i;

    func_09C2F0(0x238, &box, 0.0f);
    ROW(1, 0x257)
    ROW(2, 0x258)
    ROW(3, 0x259)
    ROW(4, 0x25A)
    ROW(5, 0x25B)
    ROW(6, 0x25C)
    ROW(7, 0x25D)
    for (i = 0; i < 4; i++) {
        if (D_002D2410[i].name[0] != 0) {
            tmp = func_118A00(0, i);
            r = tmp;
            func_098378((short)func_096208(&r), (short)r.d, D_002D2410[i].name);
            CELL(1, f00)
            CELL(2, f04)
            CELL(3, f08)
            CELL(4, f0C)
            CELL(5, f10)
            CELL(6, f14)
        }
    }
    tmp = func_118A00(7, 0);
    r = tmp;
    func_0974A8(r.a, (short)r.d, D_002D2390);
    if (func_114D40() == 0)
        func_0AA370(D_002D2410[func_0AB560()].name, 10);
}
