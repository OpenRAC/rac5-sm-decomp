/* LEVEL_01:0x146EF0 -- initialises the object: clears its child state, starts the two tracked sample pairs, resets the counters and byte flags, registers the embedded record with the player's id, links the player's entry when one exists and starts the presentation call; returns 1. */
typedef struct {
    char pad0[0xF8];
    int wF8;
} Player;

typedef struct {
    int w0;
    float f4;
    int w8;
    int wC;
    int w10[2];
    char pad18[0x40 - 0x18];
    char pad40[0x68 - 0x40];
    char pad68[0x8C - 0x68];
    char pad8C[0xB4 - 0x8C];
    int wB4;
    unsigned char bB8;
    unsigned char bB9;
    unsigned char bBA[2];
    int wBC;
} Child;

typedef struct {
    char pad0[0x46];
    unsigned char b46;
    char pad47[0x58 - 0x47];
    Child *child;
    char pad5C[0x74 - 0x5C];
    char rec74[1];
} Obj;

extern Player *D_001F45E4[1];
extern char D_0020F588[];
extern char D_0021CB20[];
extern char D_0021CB10[];

extern void func_0781D8(char *a, int b, int c, int d, char *e);
extern void func_12C1F0(char *p);
extern void func_12C720(char *p);
extern void func_023838(char *record, int kind, int id, int flag);
extern int func_024EA0(int kind, int id);
extern int func_148588(Obj *o, Player *p);
extern void func_06ADB8(Player *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_146EF0(Obj *o)
{
    Child *c = o->child;
    unsigned int i;

    c->w0 = 0;
    func_0781D8((char *)c + 0x18, 0, 0x44, 0x45, D_0020F588);
    func_0781D8((char *)c + 0x40, 0, 0x44, 0x45, D_0020F588);
    func_12C1F0((char *)c + 0x8C);
    func_12C720((char *)c + 0x68);
    c->w8 = 0;
    c->f4 = 0.3333333432674408f;
    c->bB8 = 0;
    c->wBC = 0;
    c->bB9 = 0;
    o->b46 = 0;
    func_023838(o->rec74, 2, D_001F45E4[0]->wF8, -1);
    if (func_024EA0(2, D_001F45E4[0]->wF8) != 0) {
        c->wC = func_148588(o, D_001F45E4[0]);
    } else {
        c->wC = 0;
    }
    for (i = 0; i < 2; i++) {
        c->w10[i] = 0;
        c->bBA[i] = 0;
    }
    c->wB4 = 0;
    func_06ADB8(D_001F45E4[0], D_0021CB20, D_0021CB10, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    return 1;
}
