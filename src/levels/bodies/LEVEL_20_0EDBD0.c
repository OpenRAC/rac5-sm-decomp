/* LEVEL_20:0x0EDBD0 -- placement copy of LEVEL_16_11B828.c: draws a second seven-label panel and then a four-row table of names and six numbers each. */
typedef struct {
    short x;
    short pad_02;
    short y;
    short pad_06;
    short z;
    short pad_0A;
    short w;
    short pad_0E;
} Rect;

typedef struct {
    char pad_00[0xC];
    int v_0C;
    int v_10;
    int v_14;
    char pad_18[8];
    int v_20;
    int v_24;
    int v_28;
    char pad_2C[8];
    int v_34;
    int v_38;
    int v_3C;
    char name[0x20];
    char pad_60[0x60];
} Row;

extern Row D_00204668[];
extern char D_002045E8[];
extern char D_00130CF8[];

extern void func_0874F0(int id, Rect *out, float f);
extern Rect func_0EB330(int slot);
extern Rect func_0EB430(int slot, int row);
extern void func_085328(int x0, int y0, int x1, int y1, float sx, float sy, unsigned c0, unsigned c1, unsigned c2,
                        unsigned c3, float z);
extern char *func_0E2118(int id);
extern void func_082940(int x, int y, char *text, float sx, float sy);
extern int func_081408(Rect *r);
extern void func_083578(short a, short b, char *text);
extern void func_0826A8(int x, int y, char *text);
extern int sprintf(char *buf, const char *fmt, ...);

void func_0EDBD0(void)
{
    Rect a;
    Rect b;
    Rect t;
    char buf[32];
    unsigned int i;

    func_0874F0(0x238, &b, 0.0f);
    t = func_0EB330(1);
    a = t;
    func_085328(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_082940(a.x, a.w, func_0E2118(0x267), 1.0f, 1.0f);
    t = func_0EB330(2);
    a = t;
    func_085328(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_082940(a.x, a.w, func_0E2118(0x268), 1.0f, 1.0f);
    t = func_0EB330(3);
    a = t;
    func_085328(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_082940(a.x, a.w, func_0E2118(0x269), 1.0f, 1.0f);
    t = func_0EB330(4);
    a = t;
    func_085328(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_082940(a.x, a.w, func_0E2118(0x25A), 1.0f, 1.0f);
    t = func_0EB330(5);
    a = t;
    func_085328(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_082940(a.x, a.w, func_0E2118(0x25B), 1.0f, 1.0f);
    t = func_0EB330(6);
    a = t;
    func_085328(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_082940(a.x, a.w, func_0E2118(0x25C), 1.0f, 1.0f);
    t = func_0EB330(7);
    a = t;
    func_085328(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_082940(a.x, a.w, func_0E2118(0x25D), 1.0f, 1.0f);
    for (i = 0; i < 4; i++) {
        if (D_00204668[i].name[0] != 0) {
            t = func_0EB430(0, i);
            a = t;
            func_083578(func_081408(&a), a.w, D_00204668[i].name);
            sprintf(buf, D_00130CF8, D_00204668[i].v_34);
            t = func_0EB430(1, i);
            a = t;
            func_0826A8(a.x, a.w, buf);
            sprintf(buf, D_00130CF8, D_00204668[i].v_38);
            t = func_0EB430(2, i);
            a = t;
            func_0826A8(a.x, a.w, buf);
            sprintf(buf, D_00130CF8, D_00204668[i].v_3C);
            t = func_0EB430(3, i);
            a = t;
            func_0826A8(a.x, a.w, buf);
            sprintf(buf, D_00130CF8, D_00204668[i].v_0C);
            t = func_0EB430(4, i);
            a = t;
            func_0826A8(a.x, a.w, buf);
            sprintf(buf, D_00130CF8, D_00204668[i].v_10);
            t = func_0EB430(5, i);
            a = t;
            func_0826A8(a.x, a.w, buf);
            sprintf(buf, D_00130CF8, D_00204668[i].v_14);
            t = func_0EB430(6, i);
            a = t;
            func_0826A8(a.x, a.w, buf);
        }
    }
    t = func_0EB430(7, 0);
    a = t;
    func_0826A8(a.x, a.w, D_002045E8);
}
