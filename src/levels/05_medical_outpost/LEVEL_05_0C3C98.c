/* LEVEL_05:0x0C3C98 -- placement copy of LEVEL_01_0C56F0.c: applies a stick-driven pan and zoom, then notifies the UI state helpers. */
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

extern float D_001EFF14;
extern int D_001EFE98;
extern int D_001EFE9C;
extern float D_001EFEF8;
extern float D_001EFEFC;
extern float D_001EFF00;
extern float D_001EFF04;
extern char D_001EFEA8[];
extern char D_001EFED0[];
extern Chunk D_0029FBF0[];

extern unsigned int func_0858E0(int a);
extern int func_0A4F78(void);
extern Obj *func_0857D0(int a);
extern Pad *func_085808(int a);
extern int func_029068(int a);
extern void func_0C39D0(int *a, int *b);
extern int func_0A4F18(void);
extern int func_0B45C8(int a);
extern void func_019DC0(int a, int b);
extern int func_0BB028(int a);
extern void func_0B0FE0(char *a);
extern int func_0B1078(char *a);
extern int func_0A1AB8(int a, int b, int c);

void func_0C3C98(void)
{
    unsigned int mode;
    signed char sx;
    signed char sy;
    Obj *o;
    Pad *p;
    char *q;
    int r;

    mode = func_0858E0(0x6B10);
    if (func_0A4F78() != 0) {
        o = func_0857D0(0x6B10);
        p = func_085808(0x6B10);
        sy = (int)(p->x * D_001EFF14);
        sx = (int)(p->y * D_001EFF14);
        if (func_029068(4) != 0)
            sy = -sy;
        D_001EFE98 = D_001EFE98 - sy;
        D_001EFE9C = D_001EFE9C - sx;
        func_0C39D0(&D_001EFE98, &D_001EFE9C);
        if (o->bits & 0x8000) {
            D_001EFEF8 = D_001EFEF8 + D_001EFEFC;
            if (D_001EFEF8 > D_001EFF00)
                D_001EFEF8 = D_001EFF00;
        } else if (o->bits & 0x2000) {
            D_001EFEF8 = D_001EFEF8 - D_001EFEFC;
            if (D_001EFEF8 < D_001EFF04)
                D_001EFEF8 = D_001EFF04;
        }
    }
    if ((mode & 0x81009) != 0 || func_0A4F18() == 0) {
        func_0B45C8(7);
        func_019DC0(4, 0);
    } else if (mode & 0x4000) {
        func_0B45C8(6);
        func_0BB028(15);
    }
    func_0B0FE0(D_001EFEA8);
    q = D_001EFED0;
    func_0B0FE0(q);
    r = func_0B1078(q);
    func_0A1AB8(D_0029FBF0[6].h, 5, r);
}
