/* LEVEL_10:0x1442F0 -- placement copy of LEVEL_01_146EF0.c: initialises the object: clears its child state, starts the two tracked sample pairs, resets the counters and byte flags, registers the embedded record with the player's id, links the player's entry when one exists and starts the presentation call; returns 1. */
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

extern Player *D_001FD5E4[1];
extern char D_00218508[];
extern char D_00225A90[];
extern char D_00225A80[];

extern void func_078878(char *a, int b, int c, int d, char *e);
extern void func_12A050(char *p);
extern void func_12A580(char *p);
extern void func_023038(char *record, int kind, int id, int flag);
extern int func_024808(int kind, int id);
extern int func_145988(Obj *o, Player *p);
extern void func_069BE8(Player *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1442F0(Obj *o)
{
    Child *c = o->child;
    unsigned int i;

    c->w0 = 0;
    func_078878((char *)c + 0x18, 0, 0x44, 0x45, D_00218508);
    func_078878((char *)c + 0x40, 0, 0x44, 0x45, D_00218508);
    func_12A050((char *)c + 0x8C);
    func_12A580((char *)c + 0x68);
    c->w8 = 0;
    c->f4 = 0.3333333432674408f;
    c->bB8 = 0;
    c->wBC = 0;
    c->bB9 = 0;
    o->b46 = 0;
    func_023038(o->rec74, 2, D_001FD5E4[0]->wF8, -1);
    if (func_024808(2, D_001FD5E4[0]->wF8) != 0) {
        c->wC = func_145988(o, D_001FD5E4[0]);
    } else {
        c->wC = 0;
    }
    for (i = 0; i < 2; i++) {
        c->w10[i] = 0;
        c->bBA[i] = 0;
    }
    c->wB4 = 0;
    func_069BE8(D_001FD5E4[0], D_00225A90, D_00225A80, 1, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    return 1;
}
