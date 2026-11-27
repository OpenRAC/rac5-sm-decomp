/* LEVEL_07:0x0C7750 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
typedef struct {
    char pad0[0x30];
    float x;
    float y;
} Pad;
typedef struct {
    char pad0[4];
    unsigned int bits;
} Obj;
typedef struct {
    unsigned char pad[0x1800];
    int h;
    unsigned char rest[0x10000 - 0x1804];
} Chunk;

extern float D_00214E94;
extern int D_00214E18;
extern int D_00214E1C;
extern float D_00214E78;
extern float D_00214E7C;
extern float D_00214E80;
extern float D_00214E84;
extern char D_00214E28[];
extern char D_00214E50[];
extern Chunk D_002C9630[];

extern unsigned int func_08A058(int a);
extern long long func_0A89B8(void);
extern Obj *func_089F48(int a);
extern Pad *func_089F80(int a);
extern int func_02A730(int a);
extern void func_0C7488(int *a, int *b);
extern long long func_0A8958(void);
extern int func_0B8080(int a);
extern void func_01AEE8(int a, int b);
extern int func_0BEAE0(int a);
extern void func_0B4A80(char *a);
extern int func_0B4B18(char *a);
extern int func_0A54F8(int a, int b, int c);

void func_0C7750(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_08A058(0x6B10);
    if (func_0A89B8() != 0) {
        o = func_089F48(0x6B10);
        p = func_089F80(0x6B10);
        sy = (int)(p->x * D_00214E94);
        sx = (int)(p->y * D_00214E94);
        if (func_02A730(4) != 0)
            sy = -sy;
        D_00214E18 = D_00214E18 - sy;
        D_00214E1C = D_00214E1C - sx;
        func_0C7488(&D_00214E18, &D_00214E1C);
        if (o->bits & 0x8000) {
            D_00214E78 = D_00214E78 + D_00214E7C;
            if (D_00214E78 > D_00214E80)
                D_00214E78 = D_00214E80;
        } else if (o->bits & 0x2000) {
            D_00214E78 = D_00214E78 - D_00214E7C;
            if (D_00214E78 < D_00214E84)
                D_00214E78 = D_00214E84;
        }
    }
    if ((mode & 0x81009) != 0 || func_0A8958() == 0) {
        func_0B8080(7);
        func_01AEE8(4, 0);
    } else if (mode & 0x4000) {
        func_0B8080(6);
        func_0BEAE0(15);
    }
    func_0B4A80(D_00214E28);
    q = D_00214E50;
    func_0B4A80(q);
    r = func_0B4B18(q);
    func_0A54F8(D_002C9630[6].h, 5, r);
}
