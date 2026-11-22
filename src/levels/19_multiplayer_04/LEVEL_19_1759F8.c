/* LEVEL_19:0x1759F8 -- placement copy of LEVEL_01_1B3608.c: initialises the object: clears the child's state, looks up the player's slot (failing when none), registers the embedded record with the player's id, installs the hook, sets the flag bit and starts the tracked sample pair with its scale. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad0[0xF8];
    int wF8;
} Player;

typedef struct {
    char pad0[0x40];
    int w40;
} Rec;

typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    int w10;
    int w14;
    int w18;
    int w1C;
    char x20[0x330 - 0x20];
    int w330;
    unsigned char b334;
} Child;

typedef struct {
    char pad0[0xDC];
    int wDC;
} Hook;

typedef struct {
    char pad0[0x48];
    Hook *hook;
    char pad4C[0x58 - 0x4C];
    Child *child;
    char pad5C[0x64 - 0x5C];
    unsigned int w64;
    char pad68[0x74 - 0x68];
    char rec74[1];
} Obj;

extern Player *D_001A3294[1];
extern char D_001C54B8[];
extern char D_001BF560[];
extern char D_001D85B0[];

extern int func_177278(Player *p);
extern int func_021D08(int x, int y);
extern void func_020E28(char *record, int kind, int id, int flag);
extern void func_069348(char *a, int b, int c, int d, char *e);
extern void func_104C00(Vec3 *dst, Obj *mat, char *v);
extern void func_05CD70(Player *blk, char *first, char *second, int mode, float fx, float fy, float fz);
extern void func_176298(void);

int func_1759F8(Obj *o)
{
    Child *c = o->child;
    Vec3 tmp;

    c->w0 = 0;
    c->w8 = func_177278(D_001A3294[0]);
    if (c->w8 == 0)
        return 0;
    c->w0 = 0;
    c->w4 = 0;
    if (((Rec *)func_021D08(0xC, D_001A3294[0]->wF8))->w40 != 0)
        c->w1C = 1;
    else
        c->w1C = 0;
    c->w10 = 0;
    c->w14 = 0;
    c->w18 = 0;
    c->b334 = 0;
    c->wC = 0;
    c->w330 = 0;
    o->hook->wDC = (int)func_176298;
    o->w64 |= 0x40000;
    func_020E28(o->rec74, 0xC, D_001A3294[0]->wF8, -1);
    func_069348(c->x20, 0, 0x44, 0x45, D_001C54B8);
    func_104C00(&tmp, o, D_001BF560);
    func_05CD70(D_001A3294[0], D_001D85B0, D_001BF560, 1, 0.6f, 0.4f, 10.0f);
    return 1;
}
