/* LEVEL_02:0x1D3138 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
typedef struct {
    char pad00[0xDC];
    void *callback;
} Block;

typedef struct {
    char pad00[0xC];
    int w0C;
} Rec;

typedef struct {
    char pad00[0x48];
    Block *block;
    char pad4C[0xC];
    Rec *rec;
} Obj;

typedef struct {
    char pad00[0xC];
    int slot;
} Shared;

extern char D_003B02B8[];
extern Shared D_0021DE20;
extern int D_002AF32C;
extern void *D_002095A4[1];
extern char D_0023FE10[];
extern char D_0022CDD8[];
extern void func_071058(char *a);
extern void func_1D33E0(void);
extern void func_06FE50(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1D3138(Obj *o)
{
    func_071058(D_003B02B8);
    o->block->callback = func_1D33E0;
    if (D_0021DE20.slot == -1)
        D_0021DE20.slot = D_002AF32C;
    o->rec->w0C = 0;
    func_06FE50(D_002095A4[0], D_0023FE10, D_0022CDD8, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
