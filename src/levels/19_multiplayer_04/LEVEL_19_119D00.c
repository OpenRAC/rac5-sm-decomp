/* LEVEL_19:0x119D00 -- placement copy of LEVEL_16_119390.c: draws a seven-label panel and a four-row table of names and six numbers each, then offers the current row. */
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

extern Entry D_002E1290[];
extern char D_001D0E88[];
extern char D_002E1210[];
extern void func_09C688(int, Rect *, float);
extern Rect func_1198F8(int);
extern Rect func_1199F8(int, int);
extern int func_0965A0(Rect *);
extern void func_098710(int, int, char *);
extern void func_097840(int, int, char *);
extern void func_09A4C0(float xscale, float yscale, int x, int y, int right, int bottom,
                        unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3, float zero);
extern int func_10F9D0(int);
extern void func_097AD8(int, int, int, float, float);
extern int func_115D58(void);
extern int func_0AB8F8(void);
extern void func_0AA708(char *, int);
extern int sprintf(char *, const char *, ...);

#define ROW(k, id) \
    tmp = func_1198F8(k); \
    r = tmp; \
    func_09A4C0(1.0f, 1.0f, box.a, (short)r.b, box.c, (short)r.d, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f); \
    func_097AD8(r.a, (short)r.d, func_10F9D0(id), 1.0f, 1.0f);

#define CELL(k, field) \
    sprintf(text, D_001D0E88, D_002E1290[i].field); \
    tmp = func_1199F8(k, i); \
    r = tmp; \
    func_097840(r.a, (short)r.d, text);

void func_119D00(void)
{
    Rect r, box, tmp;
    char text[32];
    unsigned int i;

    func_09C688(0x238, &box, 0.0f);
    ROW(1, 0x257)
    ROW(2, 0x258)
    ROW(3, 0x259)
    ROW(4, 0x25A)
    ROW(5, 0x25B)
    ROW(6, 0x25C)
    ROW(7, 0x25D)
    for (i = 0; i < 4; i++) {
        if (D_002E1290[i].name[0] != 0) {
            tmp = func_1199F8(0, i);
            r = tmp;
            func_098710((short)func_0965A0(&r), (short)r.d, D_002E1290[i].name);
            CELL(1, f00)
            CELL(2, f04)
            CELL(3, f08)
            CELL(4, f0C)
            CELL(5, f10)
            CELL(6, f14)
        }
    }
    tmp = func_1199F8(7, 0);
    r = tmp;
    func_097840(r.a, (short)r.d, D_002E1210);
    if (func_115D58() == 0)
        func_0AA708(D_002E1290[func_0AB8F8()].name, 10);
}
