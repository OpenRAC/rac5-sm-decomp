/* LEVEL_19:0x0B4278 -- placement copy of LEVEL_16_0B49A0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
typedef struct {
    char pad0[0x30];
    float x;
    float y;
} Pad;
typedef struct {
    char pad0[4];
    unsigned int bits;
} Obj;

extern float D_001AFD8C;
extern int D_001AFD10;
extern int D_001AFD14;
extern float D_001AFD70;
extern float D_001AFD74;
extern float D_001AFD78;
extern float D_001AFD7C;
extern char D_001AFD20[];
extern char D_001AFD48[];

extern unsigned int func_0799B0(int a);
extern long long func_0951C0(void);
extern Obj *func_0798A0(int a);
extern Pad *func_0798D8(int a);
extern int func_0279E0(int a);
extern void func_0B4210(int *a, int *b);
extern int func_0951A0(void);
extern int func_0A4928(int a);
extern void func_018898(int a, int b);
extern int func_0AB7E0(int a);
extern void func_0A0C18(char *a);

void func_0B4278(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;

    mode = func_0799B0(0x6B10);
    if (func_0951C0() != 0) {
        o = func_0798A0(0x6B10);
        p = func_0798D8(0x6B10);
        sy = (int)(p->x * D_001AFD8C);
        sx = (int)(p->y * D_001AFD8C);
        if (func_0279E0(4) != 0)
            sy = -sy;
        D_001AFD10 = D_001AFD10 - sy;
        D_001AFD14 = D_001AFD14 - sx;
        func_0B4210(&D_001AFD10, &D_001AFD14);
        if (o->bits & 0x8000) {
            D_001AFD70 = D_001AFD70 + D_001AFD74;
            if (D_001AFD70 > D_001AFD78)
                D_001AFD70 = D_001AFD78;
        } else if (o->bits & 0x2000) {
            D_001AFD70 = D_001AFD70 - D_001AFD74;
            if (D_001AFD70 < D_001AFD7C)
                D_001AFD70 = D_001AFD7C;
        }
    }
    if ((mode & 0x81009) != 0 || func_0951A0() == 0) {
        func_0A4928(7);
        func_018898(4, 0);
    } else if (mode & 0x4000) {
        func_0A4928(6);
        func_0AB7E0(15);
    }
    func_0A0C18(D_001AFD20);
    func_0A0C18(D_001AFD48);
}
