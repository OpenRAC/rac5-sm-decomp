/* LEVEL_20:0x09EED0 -- placement copy of LEVEL_16_0B49A0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
typedef struct {
    char pad0[0x30];
    float x;
    float y;
} Pad;
typedef struct {
    char pad0[4];
    unsigned int bits;
} Obj;

extern float D_001112EC;
extern int D_00111270;
extern int D_00111274;
extern float D_001112D0;
extern float D_001112D4;
extern float D_001112D8;
extern float D_001112DC;
extern char D_00111280[];
extern char D_001112A8[];

extern unsigned int func_067138(int a);
extern long long func_080028(void);
extern Obj *func_067028(int a);
extern Pad *func_067060(int a);
extern int func_024940(int a);
extern void func_09EE68(int *a, int *b);
extern int func_080008(void);
extern int func_08F6B0(int a);
extern void func_016950(int a, int b);
extern int func_096438(int a);
extern void func_08BA80(char *a);

void func_09EED0(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;

    mode = func_067138(0x6B10);
    if (func_080028() != 0) {
        o = func_067028(0x6B10);
        p = func_067060(0x6B10);
        sy = (int)(p->x * D_001112EC);
        sx = (int)(p->y * D_001112EC);
        if (func_024940(4) != 0)
            sy = -sy;
        D_00111270 = D_00111270 - sy;
        D_00111274 = D_00111274 - sx;
        func_09EE68(&D_00111270, &D_00111274);
        if (o->bits & 0x8000) {
            D_001112D0 = D_001112D0 + D_001112D4;
            if (D_001112D0 > D_001112D8)
                D_001112D0 = D_001112D8;
        } else if (o->bits & 0x2000) {
            D_001112D0 = D_001112D0 - D_001112D4;
            if (D_001112D0 < D_001112DC)
                D_001112D0 = D_001112DC;
        }
    }
    if ((mode & 0x81009) != 0 || func_080008() == 0) {
        func_08F6B0(7);
        func_016950(4, 0);
    } else if (mode & 0x4000) {
        func_08F6B0(6);
        func_096438(15);
    }
    func_08BA80(D_00111280);
    func_08BA80(D_001112A8);
}
