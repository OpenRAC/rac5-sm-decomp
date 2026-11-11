/* LEVEL_01:0x151248 -- derives the tile grid parameters from the loaded record and builds the grid buffer. */
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

extern Src *D_00206D9C;
typedef struct {
    V12 a;
    V12 b;
} Pair;

extern Pair D_00393844;

#define G ((Glob *)((char *)&D_00393844 - 0x1CAC))
extern char D_0021D358[];
extern float ceilf(float x);
extern int func_10F7A0(int size, int a, void *p, int line);
extern void func_151190(void);

void func_151248(void)
{
    float r;

    D_00393844.a = D_00206D9C->a;
    D_00393844.b = D_00206D9C->b;
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
    G->buf = func_10F7A0(G->n * 2, 0, D_0021D358, 0x1B1);
    func_151190();
}
