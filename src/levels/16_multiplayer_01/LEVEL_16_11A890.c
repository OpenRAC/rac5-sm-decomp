/* LEVEL_16:0x11A890 -- draws a seven-label panel and then a four-row table of names and six numbers each. */
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

extern Row D_002E1110[];
extern char D_002E1090[];
extern char D_001CFC88[];

extern void func_09CDF8(int id, Rect *out, float f);
extern Rect func_118F88(int slot);
extern Rect func_119088(int slot, int row);
extern void func_09AC30(int x0, int y0, int x1, int y1, float sx, float sy, unsigned c0, unsigned c1, unsigned c2,
                        unsigned c3, float z);
extern char *func_10F330(int id);
extern void func_098248(int x, int y, char *text, float sx, float sy);
extern int func_096D10(Rect *r);
extern void func_098E80(short a, short b, char *text);
extern void func_097FB0(int x, int y, char *text);
extern int sprintf(char *buf, const char *fmt, ...);

void func_11A890(void)
{
    Rect a;
    Rect b;
    Rect t;
    char buf[32];
    unsigned int i;

    func_09CDF8(0x238, &b, 0.0f);
    t = func_118F88(4);
    a = t;
    func_09AC30(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_098248(a.x, a.w, func_10F330(0x25A), 1.0f, 1.0f);
    t = func_118F88(5);
    a = t;
    func_09AC30(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_098248(a.x, a.w, func_10F330(0x25B), 1.0f, 1.0f);
    t = func_118F88(6);
    a = t;
    func_09AC30(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_098248(a.x, a.w, func_10F330(0x25C), 1.0f, 1.0f);
    t = func_118F88(3);
    a = t;
    func_09AC30(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_098248(a.x, a.w, func_10F330(0x283), 1.0f, 1.0f);
    t = func_118F88(1);
    a = t;
    func_09AC30(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_098248(a.x, a.w, func_10F330(0x281), 1.0f, 1.0f);
    t = func_118F88(2);
    a = t;
    func_09AC30(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_098248(a.x, a.w, func_10F330(0x282), 1.0f, 1.0f);
    t = func_118F88(7);
    a = t;
    func_09AC30(b.x, a.y, b.z, a.w, 1.0f, 1.0f, 0x40401000, 0x40401000, 0x40401000, 0x40401000, 0.0f);
    func_098248(a.x, a.w, func_10F330(0x25D), 1.0f, 1.0f);
    for (i = 0; i < 4; i++) {
        if (D_002E1110[i].name[0] != 0) {
            t = func_119088(0, i);
            a = t;
            func_098E80(func_096D10(&a), a.w, D_002E1110[i].name);
            sprintf(buf, D_001CFC88, D_002E1110[i].v_0C);
            t = func_119088(4, i);
            a = t;
            func_097FB0(a.x, a.w, buf);
            sprintf(buf, D_001CFC88, D_002E1110[i].v_10);
            t = func_119088(5, i);
            a = t;
            func_097FB0(a.x, a.w, buf);
            sprintf(buf, D_001CFC88, D_002E1110[i].v_14);
            t = func_119088(6, i);
            a = t;
            func_097FB0(a.x, a.w, buf);
            sprintf(buf, D_001CFC88, D_002E1110[i].v_20);
            t = func_119088(3, i);
            a = t;
            func_097FB0(a.x, a.w, buf);
            sprintf(buf, D_001CFC88, D_002E1110[i].v_24);
            t = func_119088(1, i);
            a = t;
            func_097FB0(a.x, a.w, buf);
            sprintf(buf, D_001CFC88, D_002E1110[i].v_28);
            t = func_119088(2, i);
            a = t;
            func_097FB0(a.x, a.w, buf);
        }
    }
    t = func_119088(7, 0);
    a = t;
    func_097FB0(a.x, a.w, D_002E1090);
}
