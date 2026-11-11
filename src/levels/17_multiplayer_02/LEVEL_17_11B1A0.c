/* LEVEL_17:0x11B1A0 -- placement copy of LEVEL_16_11B828.c: draws a second seven-label panel and then a four-row table of names and six numbers each. */
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

extern Row D_002D2410[];
extern char D_002D2390[];
extern char D_001C3108[];

extern void func_09C2F0(int id, Rect *out, float f);
extern Rect func_118900(int slot);
extern Rect func_118A00(int slot, int row);
extern void func_09A128(int x0, int y0, int x1, int y1, float sx, float sy, unsigned c0, unsigned c1, unsigned c2,
                        unsigned c3, float z);
extern char *func_10E8A8(int id);
extern void func_097740(int x, int y, char *text, float sx, float sy);
extern int func_096208(Rect *r);
extern void func_098378(short a, short b, char *text);
extern void func_0974A8(int x, int y, char *text);
extern int sprintf(char *buf, const char *fmt, ...);

void func_11B1A0(void)
{
    Rect a;
    Rect b;
    Rect t;
    char buf[32];
    unsigned int i;

    func_09C2F0(0x238, &b, 0.0f);
    t = func_118900(1);
    a = t;
    func_09A128(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097740(a.x, a.w, func_10E8A8(0x267), 1.0f, 1.0f);
    t = func_118900(2);
    a = t;
    func_09A128(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097740(a.x, a.w, func_10E8A8(0x268), 1.0f, 1.0f);
    t = func_118900(3);
    a = t;
    func_09A128(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097740(a.x, a.w, func_10E8A8(0x269), 1.0f, 1.0f);
    t = func_118900(4);
    a = t;
    func_09A128(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097740(a.x, a.w, func_10E8A8(0x25A), 1.0f, 1.0f);
    t = func_118900(5);
    a = t;
    func_09A128(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097740(a.x, a.w, func_10E8A8(0x25B), 1.0f, 1.0f);
    t = func_118900(6);
    a = t;
    func_09A128(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097740(a.x, a.w, func_10E8A8(0x25C), 1.0f, 1.0f);
    t = func_118900(7);
    a = t;
    func_09A128(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097740(a.x, a.w, func_10E8A8(0x25D), 1.0f, 1.0f);
    for (i = 0; i < 4; i++) {
        if (D_002D2410[i].name[0] != 0) {
            t = func_118A00(0, i);
            a = t;
            func_098378(func_096208(&a), a.w, D_002D2410[i].name);
            sprintf(buf, D_001C3108, D_002D2410[i].v_34);
            t = func_118A00(1, i);
            a = t;
            func_0974A8(a.x, a.w, buf);
            sprintf(buf, D_001C3108, D_002D2410[i].v_38);
            t = func_118A00(2, i);
            a = t;
            func_0974A8(a.x, a.w, buf);
            sprintf(buf, D_001C3108, D_002D2410[i].v_3C);
            t = func_118A00(3, i);
            a = t;
            func_0974A8(a.x, a.w, buf);
            sprintf(buf, D_001C3108, D_002D2410[i].v_0C);
            t = func_118A00(4, i);
            a = t;
            func_0974A8(a.x, a.w, buf);
            sprintf(buf, D_001C3108, D_002D2410[i].v_10);
            t = func_118A00(5, i);
            a = t;
            func_0974A8(a.x, a.w, buf);
            sprintf(buf, D_001C3108, D_002D2410[i].v_14);
            t = func_118A00(6, i);
            a = t;
            func_0974A8(a.x, a.w, buf);
        }
    }
    t = func_118A00(7, 0);
    a = t;
    func_0974A8(a.x, a.w, D_002D2390);
}
