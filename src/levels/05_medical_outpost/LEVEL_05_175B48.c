/* LEVEL_05:0x175B48 -- placement copy of LEVEL_01_1841D0.c: resets an object's state, points its record at the global game block, starts the embedded part, installs a handler, programs the game block with two sample tables and three floats, runs the record's sub-initializers and returns 1. */
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

extern Game *D_001E3964[1];
extern Sample D_0020FD28;
extern Sample D_0020FD08;
extern char D_001F7358[];
extern void func_068A20(struct Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);
extern void func_16EF08(char *item);
extern void func_16FED8(char *a0);
extern void func_1758F0(void);
extern void func_175AA0(char *a0);
extern void func_176260(void);
extern void func_1D8300(struct A1E8F08 *p, struct B1E8F08 *b, int c);
extern void func_1D83B0(char *a0, char *a1);
extern void func_0227D0(char *part, int a1, int a2, int a3);

int func_175B48(Obj *o)
{
    Rec *rec;
    Game *g;

    func_1758F0();
    rec = o->rec;
    rec->b0D = 0;
    rec->game = D_001E3964[0];
    rec->f08 = 2.0f;
    g = D_001E3964[0];
    func_0227D0(o->part, 0xB, g->fF8, -1);
    o->hold->handler = func_176260;
    func_068A20((struct Block *)g, &D_0020FD28, &D_0020FD08, 1, 0.6f, 0.4f, 20.0f);
    func_1D8300((struct A1E8F08 *)((char *)rec + 0x230), (struct B1E8F08 *)D_001F7358, (int)((char *)rec + 0x198));
    func_1D83B0((char *)rec + 0x1C8, D_001F7358);
    func_16FED8((char *)rec + 0x44);
    func_16EF08((char *)o);
    func_175AA0((char *)o);
    return 1;
}
