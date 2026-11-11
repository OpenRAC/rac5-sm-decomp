/* LEVEL_18:0x119880 -- placement copy of LEVEL_16_11A890.c: draws a seven-label panel and then a four-row table of names and six numbers each. */
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
    char pad_2C[0x14];
    char name[0x20];
    char pad_60[0x60];
} Row;

extern Row D_002E1490[];
extern char D_002E1410[];
extern char D_001D1208[];

extern void func_09BE08(int id, Rect *out, float f);
extern Rect func_117F78(int slot);
extern Rect func_118078(int slot, int row);
extern void func_099C40(int x0, int y0, int x1, int y1, float sx, float sy, unsigned c0, unsigned c1, unsigned c2,
                        unsigned c3, float z);
extern char *func_10DFE0(int id);
extern void func_097258(int x, int y, char *text, float sx, float sy);
extern int func_095D20(Rect *r);
extern void func_097E90(short a, short b, char *text);
extern void func_096FC0(int x, int y, char *text);
extern int sprintf(char *buf, const char *fmt, ...);

void func_119880(void)
{
    Rect a;
    Rect b;
    Rect t;
    char buf[32];
    unsigned int i;

    func_09BE08(0x238, &b, 0.0f);
    t = func_117F78(4);
    a = t;
    func_099C40(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097258(a.x, a.w, func_10DFE0(0x25A), 1.0f, 1.0f);
    t = func_117F78(5);
    a = t;
    func_099C40(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097258(a.x, a.w, func_10DFE0(0x25B), 1.0f, 1.0f);
    t = func_117F78(6);
    a = t;
    func_099C40(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097258(a.x, a.w, func_10DFE0(0x25C), 1.0f, 1.0f);
    t = func_117F78(3);
    a = t;
    func_099C40(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097258(a.x, a.w, func_10DFE0(0x283), 1.0f, 1.0f);
    t = func_117F78(1);
    a = t;
    func_099C40(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097258(a.x, a.w, func_10DFE0(0x281), 1.0f, 1.0f);
    t = func_117F78(2);
    a = t;
    func_099C40(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097258(a.x, a.w, func_10DFE0(0x282), 1.0f, 1.0f);
    t = func_117F78(7);
    a = t;
    func_099C40(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_097258(a.x, a.w, func_10DFE0(0x25D), 1.0f, 1.0f);
    for (i = 0; i < 4; i++) {
        if (D_002E1490[i].name[0] != 0) {
            t = func_118078(0, i);
            a = t;
            func_097E90(func_095D20(&a), a.w, D_002E1490[i].name);
            sprintf(buf, D_001D1208, D_002E1490[i].v_0C);
            t = func_118078(4, i);
            a = t;
            func_096FC0(a.x, a.w, buf);
            sprintf(buf, D_001D1208, D_002E1490[i].v_10);
            t = func_118078(5, i);
            a = t;
            func_096FC0(a.x, a.w, buf);
            sprintf(buf, D_001D1208, D_002E1490[i].v_14);
            t = func_118078(6, i);
            a = t;
            func_096FC0(a.x, a.w, buf);
            sprintf(buf, D_001D1208, D_002E1490[i].v_20);
            t = func_118078(3, i);
            a = t;
            func_096FC0(a.x, a.w, buf);
            sprintf(buf, D_001D1208, D_002E1490[i].v_24);
            t = func_118078(1, i);
            a = t;
            func_096FC0(a.x, a.w, buf);
            sprintf(buf, D_001D1208, D_002E1490[i].v_28);
            t = func_118078(2, i);
            a = t;
            func_096FC0(a.x, a.w, buf);
        }
    }
    t = func_118078(7, 0);
    a = t;
    func_096FC0(a.x, a.w, D_002E1410);
}
