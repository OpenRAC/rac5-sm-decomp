/* LEVEL_09:0x177C60 -- placement copy of LEVEL_01_1841D0.c: resets an object's state, points its record at the global game block, starts the embedded part, installs a handler, programs the game block with two sample tables and three floats, runs the record's sub-initializers and returns 1. */
typedef struct {
    float f[2];
    int n;
} Sample;

struct Block;
struct A1E8F08;
struct B1E8F08;

typedef struct {
    char pad000[0xF8];
    int fF8;
} Game;

typedef struct {
    char pad00[0xDC];
    void *handler;
} Hold;

typedef struct {
    Game *game;
    char pad04[4];
    float f08;
    char pad0C;
    unsigned char b0D;
} Rec;

typedef struct {
    char pad00[0x48];
    Hold *hold;
    char pad4C[0xC];
    Rec *rec;
    char pad5C[0x18];
    char part[0x20];
} Obj;

extern Game *D_001DE3E4[1];
extern Sample D_0020B448;
extern Sample D_0020B428;
extern char D_001F2140[];
extern void func_0679B8(struct Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);
extern void func_171020(char *item);
extern void func_171FF0(char *a0);
extern void func_177A08(void);
extern void func_177BB8(char *a0);
extern void func_178378(void);
extern void func_1D2D70(struct A1E8F08 *p, struct B1E8F08 *b, int c);
extern void func_1D2E20(char *a0, char *a1);
extern void func_0229C8(char *part, int a1, int a2, int a3);

int func_177C60(Obj *o)
{
    Rec *rec;
    Game *g;

    func_177A08();
    rec = o->rec;
    rec->b0D = 0;
    rec->game = D_001DE3E4[0];
    rec->f08 = 2.0f;
    g = D_001DE3E4[0];
    func_0229C8(o->part, 0xB, g->fF8, -1);
    o->hold->handler = func_178378;
    func_0679B8((struct Block *)g, &D_0020B448, &D_0020B428, 1, 0.6f, 0.4f, 20.0f);
    func_1D2D70((struct A1E8F08 *)((char *)rec + 0x230), (struct B1E8F08 *)D_001F2140, (int)((char *)rec + 0x198));
    func_1D2E20((char *)rec + 0x1C8, D_001F2140);
    func_171FF0((char *)rec + 0x44);
    func_171020((char *)o);
    func_177BB8((char *)o);
    return 1;
}
