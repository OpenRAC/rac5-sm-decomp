/* LEVEL_09:0x1A5C18 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_0037FBB8[];
extern Shared D_001F2AC8;
extern int D_0027F5AC;
extern void *D_001DE3E4[1];
extern char D_00210250[];
extern char D_00201A58[];
extern void func_0687D8(char *a);
extern void func_1A5E90(void);
extern void func_0679B8(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1A5C18(Obj *o)
{
    func_0687D8(D_0037FBB8);
    o->block->callback = func_1A5E90;
    if (D_001F2AC8.slot == -1)
        D_001F2AC8.slot = D_0027F5AC;
    o->rec->w0C = 0;
    func_0679B8(D_001DE3E4[0], D_00210250, D_00201A58, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
