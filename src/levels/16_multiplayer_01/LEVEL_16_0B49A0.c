/* LEVEL_16:0x0B49A0 -- applies a stick-driven pan and zoom, then notifies the UI state helpers. */
typedef struct {
    char pad0[0x30];
    float x;
    float y;
} Pad;
typedef struct {
    char pad0[4];
    unsigned int bits;
} Obj;

extern float D_001AEC0C;
extern int D_001AEB90;
extern int D_001AEB94;
extern float D_001AEBF0;
extern float D_001AEBF4;
extern float D_001AEBF8;
extern float D_001AEBFC;
extern char D_001AEBA0[];
extern char D_001AEBC8[];

extern unsigned int func_0794C8(int a);
extern long long func_095930(void);
extern Obj *func_0793B8(int a);
extern Pad *func_0793F0(int a);
extern int func_027E38(int a);
extern void func_0B4938(int *a, int *b);
extern int func_095910(void);
extern int func_0A50B0(int a);
extern void func_018B98(int a, int b);
extern int func_0ABF08(int a);
extern void func_0A1388(char *a);

void func_0B49A0(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;

    mode = func_0794C8(0x6B10);
    if (func_095930() != 0) {
        o = func_0793B8(0x6B10);
        p = func_0793F0(0x6B10);
        sy = (int)(p->x * D_001AEC0C);
        sx = (int)(p->y * D_001AEC0C);
        if (func_027E38(4) != 0)
            sy = -sy;
        D_001AEB90 = D_001AEB90 - sy;
        D_001AEB94 = D_001AEB94 - sx;
        func_0B4938(&D_001AEB90, &D_001AEB94);
        if (o->bits & 0x8000) {
            D_001AEBF0 = D_001AEBF0 + D_001AEBF4;
            if (D_001AEBF0 > D_001AEBF8)
                D_001AEBF0 = D_001AEBF8;
        } else if (o->bits & 0x2000) {
            D_001AEBF0 = D_001AEBF0 - D_001AEBF4;
            if (D_001AEBF0 < D_001AEBFC)
                D_001AEBF0 = D_001AEBFC;
        }
    }
    if ((mode & 0x81009) != 0 || func_095910() == 0) {
        func_0A50B0(7);
        func_018B98(4, 0);
    } else if (mode & 0x4000) {
        func_0A50B0(6);
        func_0ABF08(15);
    }
    func_0A1388(D_001AEBA0);
    func_0A1388(D_001AEBC8);
}
