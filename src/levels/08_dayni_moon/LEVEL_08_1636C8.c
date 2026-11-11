/* LEVEL_08:0x1636C8 -- placement copy of LEVEL_01_151248.c: derives the tile grid parameters from the loaded record and builds the grid buffer. */
typedef struct {
    float f[3];
} V12;

typedef struct {
    char pad0[0x34];
    V12 a;
    char pad40[0xC];
    V12 b;
} Src;

typedef struct {
    char pad0[0x498];
    int buf;
    char pad49C[0x1CA0 - 0x49C];
    int w;
    int h;
    int n;
    V12 a;
    V12 b;
    float f1CC4;
    float f1CC8;
    float f1CCC;
    float f1CD0;
    float f1CD4;
    float f1CD8;
} Glob;

extern Src *D_0024FC5C;
typedef struct {
    V12 a;
    V12 b;
} Pair;

extern Pair D_003E2B54;

#define G ((Glob *)((char *)&D_003E2B54 - 0x1CAC))
extern char D_00267448[];
extern float ceilf(float x);
extern int func_11FF40(int size, int a, void *p, int line);
extern void func_163610(void);

void func_1636C8(void)
{
    float r;

    D_003E2B54.a = D_0024FC5C->a;
    D_003E2B54.b = D_0024FC5C->b;
    r = 1.0f / G->b.f[1];
    G->f1CD0 = 0.0625f;
    G->f1CC4 = 16.0f;
    G->f1CCC = 16.0f;
    G->f1CD8 = 0.0625f;
    r = r * 65536.0f;
    G->f1CC8 = r;
    G->f1CD4 = 1.0f / r;
    G->w = (int)ceilf(G->b.f[0] * 0.0625f);
    G->h = (int)ceilf(G->b.f[2] * 0.0625f);
    G->n = G->w * G->h;
    G->buf = func_11FF40(G->n * 2, 0, D_00267448, 0x1B1);
    func_163610();
}
