/* LEVEL_01:0x1841D0 -- resets an object's state, points its record at the global game block, starts the embedded part, installs a handler, programs the game block with two sample tables and three floats, runs the record's sub-initializers and returns 1. */
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

extern Game *D_001F45E4[1];
extern Sample D_00222968;
extern Sample D_00222948;
extern char D_002083F0[];
extern void func_06ADB8(struct Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);
extern void func_17D590(char *item);
extern void func_17E560(char *a0);
extern void func_183F78(void);
extern void func_184128(char *a0);
extern void func_1848E8(void);
extern void func_1E8F08(struct A1E8F08 *p, struct B1E8F08 *b, int c);
extern void func_1E8FB8(char *a0, char *a1);
extern void func_023838(char *part, int a1, int a2, int a3);

int func_1841D0(Obj *o)
{
    Rec *rec;
    Game *g;

    func_183F78();
    rec = o->rec;
    rec->b0D = 0;
    rec->game = D_001F45E4[0];
    rec->f08 = 2.0f;
    g = D_001F45E4[0];
    func_023838(o->part, 0xB, g->fF8, -1);
    o->hold->handler = func_1848E8;
    func_06ADB8((struct Block *)g, &D_00222968, &D_00222948, 1, 0.6f, 0.4f, 20.0f);
    func_1E8F08((struct A1E8F08 *)((char *)rec + 0x230), (struct B1E8F08 *)D_002083F0, (int)((char *)rec + 0x198));
    func_1E8FB8((char *)rec + 0x1C8, D_002083F0);
    func_17E560((char *)rec + 0x44);
    func_17D590((char *)o);
    func_184128((char *)o);
    return 1;
}
