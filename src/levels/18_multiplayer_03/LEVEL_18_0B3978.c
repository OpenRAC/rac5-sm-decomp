/* LEVEL_18:0x0B3978 -- placement copy of LEVEL_16_0B49A0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
typedef struct {
    char pad0[0x30];
    float x;
    float y;
} Pad;
typedef struct {
    char pad0[4];
    unsigned int bits;
} Obj;

extern float D_001B008C;
extern int D_001B0010;
extern int D_001B0014;
extern float D_001B0070;
extern float D_001B0074;
extern float D_001B0078;
extern float D_001B007C;
extern char D_001B0020[];
extern char D_001B0048[];

extern unsigned int func_078E48(int a);
extern long long func_094940(void);
extern Obj *func_078D38(int a);
extern Pad *func_078D70(int a);
extern int func_0273E8(int a);
extern void func_0B3910(int *a, int *b);
extern int func_094920(void);
extern int func_0A40A8(int a);
extern void func_0181E0(int a, int b);
extern int func_0AAEE0(int a);
extern void func_0A0398(char *a);

void func_0B3978(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;

    mode = func_078E48(0x6B10);
    if (func_094940() != 0) {
        o = func_078D38(0x6B10);
        p = func_078D70(0x6B10);
        sy = (int)(p->x * D_001B008C);
        sx = (int)(p->y * D_001B008C);
        if (func_0273E8(4) != 0)
            sy = -sy;
        D_001B0010 = D_001B0010 - sy;
        D_001B0014 = D_001B0014 - sx;
        func_0B3910(&D_001B0010, &D_001B0014);
        if (o->bits & 0x8000) {
            D_001B0070 = D_001B0070 + D_001B0074;
            if (D_001B0070 > D_001B0078)
                D_001B0070 = D_001B0078;
        } else if (o->bits & 0x2000) {
            D_001B0070 = D_001B0070 - D_001B0074;
            if (D_001B0070 < D_001B007C)
                D_001B0070 = D_001B007C;
        }
    }
    if ((mode & 0x81009) != 0 || func_094920() == 0) {
        func_0A40A8(7);
        func_0181E0(4, 0);
    } else if (mode & 0x4000) {
        func_0A40A8(6);
        func_0AAEE0(15);
    }
    func_0A0398(D_001B0020);
    func_0A0398(D_001B0048);
}
