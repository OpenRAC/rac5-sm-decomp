/* LEVEL_23:0x16F0B8 -- placement copy of LEVEL_01_1841D0.c: resets an object's state, points its record at the global game block, starts the embedded part, installs a handler, programs the game block with two sample tables and three floats, runs the record's sub-initializers and returns 1. */
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

extern Game *D_001C79E4[1];
extern Sample D_001F3938;
extern Sample D_001F3918;
extern char D_001DB968[];
extern void func_064570(struct Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);
extern void func_168478(char *item);
extern void func_169448(char *a0);
extern void func_16EE60(void);
extern void func_16F010(char *a0);
extern void func_16F7D0(void);
extern void func_1B6FC0(struct A1E8F08 *p, struct B1E8F08 *b, int c);
extern void func_1B7070(char *a0, char *a1);
extern void func_0219E0(char *part, int a1, int a2, int a3);

int func_16F0B8(Obj *o)
{
    Rec *rec;
    Game *g;

    func_16EE60();
    rec = o->rec;
    rec->b0D = 0;
    rec->game = D_001C79E4[0];
    rec->f08 = 2.0f;
    g = D_001C79E4[0];
    func_0219E0(o->part, 0xB, g->fF8, -1);
    o->hold->handler = func_16F7D0;
    func_064570((struct Block *)g, &D_001F3938, &D_001F3918, 1, 0.6f, 0.4f, 20.0f);
    func_1B6FC0((struct A1E8F08 *)((char *)rec + 0x230), (struct B1E8F08 *)D_001DB968, (int)((char *)rec + 0x198));
    func_1B7070((char *)rec + 0x1C8, D_001DB968);
    func_169448((char *)rec + 0x44);
    func_168478((char *)o);
    func_16F010((char *)o);
    return 1;
}
