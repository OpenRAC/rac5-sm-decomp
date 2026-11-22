/* LEVEL_24:0x169200 -- placement copy of LEVEL_01_1841D0.c: resets an object's state, points its record at the global game block, starts the embedded part, installs a handler, programs the game block with two sample tables and three floats, runs the record's sub-initializers and returns 1. */
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

extern Game *D_001C5264[1];
extern Sample D_001F0DC8;
extern Sample D_001F0DA8;
extern char D_001D93C0[];
extern void func_064408(struct Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);
extern void func_1625C0(char *item);
extern void func_163590(char *a0);
extern void func_168FA8(void);
extern void func_169158(char *a0);
extern void func_169918(void);
extern void func_1B9BE0(struct A1E8F08 *p, struct B1E8F08 *b, int c);
extern void func_1B9C90(char *a0, char *a1);
extern void func_0215B0(char *part, int a1, int a2, int a3);

int func_169200(Obj *o)
{
    Rec *rec;
    Game *g;

    func_168FA8();
    rec = o->rec;
    rec->b0D = 0;
    rec->game = D_001C5264[0];
    rec->f08 = 2.0f;
    g = D_001C5264[0];
    func_0215B0(o->part, 0xB, g->fF8, -1);
    o->hold->handler = func_169918;
    func_064408((struct Block *)g, &D_001F0DC8, &D_001F0DA8, 1, 0.6f, 0.4f, 20.0f);
    func_1B9BE0((struct A1E8F08 *)((char *)rec + 0x230), (struct B1E8F08 *)D_001D93C0, (int)((char *)rec + 0x198));
    func_1B9C90((char *)rec + 0x1C8, D_001D93C0);
    func_163590((char *)rec + 0x44);
    func_1625C0((char *)o);
    func_169158((char *)o);
    return 1;
}
