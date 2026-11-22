/* LEVEL_07:0x1912B0 -- placement copy of LEVEL_01_1841D0.c: resets an object's state, points its record at the global game block, starts the embedded part, installs a handler, programs the game block with two sample tables and three floats, runs the record's sub-initializers and returns 1. */
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

extern Game *D_002088E4[1];
extern Sample D_00238138;
extern Sample D_00238118;
extern char D_0021CC60[];
extern void func_06BAC0(struct Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);
extern void func_18A670(char *item);
extern void func_18B640(char *a0);
extern void func_191058(void);
extern void func_191208(char *a0);
extern void func_1919C8(void);
extern void func_1FD1D8(struct A1E8F08 *p, struct B1E8F08 *b, int c);
extern void func_1FD288(char *a0, char *a1);
extern void func_023C98(char *part, int a1, int a2, int a3);

int func_1912B0(Obj *o)
{
    Rec *rec;
    Game *g;

    func_191058();
    rec = o->rec;
    rec->b0D = 0;
    rec->game = D_002088E4[0];
    rec->f08 = 2.0f;
    g = D_002088E4[0];
    func_023C98(o->part, 0xB, g->fF8, -1);
    o->hold->handler = func_1919C8;
    func_06BAC0((struct Block *)g, &D_00238138, &D_00238118, 1, 0.6f, 0.4f, 20.0f);
    func_1FD1D8((struct A1E8F08 *)((char *)rec + 0x230), (struct B1E8F08 *)D_0021CC60, (int)((char *)rec + 0x198));
    func_1FD288((char *)rec + 0x1C8, D_0021CC60);
    func_18B640((char *)rec + 0x44);
    func_18A670((char *)o);
    func_191208((char *)o);
    return 1;
}
