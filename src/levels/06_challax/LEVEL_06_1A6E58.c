/* LEVEL_06:0x1A6E58 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_00384DE0[];
extern Shared D_001F7D70;
extern int D_00284BAC;
extern void *D_001E34E4[1];
extern char D_002154F0[];
extern char D_00206CD8[];
extern void func_068998(char *a);
extern void func_1A70D0(void);
extern void func_067B78(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1A6E58(Obj *o)
{
    func_068998(D_00384DE0);
    o->block->callback = func_1A70D0;
    if (D_001F7D70.slot == -1)
        D_001F7D70.slot = D_00284BAC;
    o->rec->w0C = 0;
    func_067B78(D_001E34E4[0], D_002154F0, D_00206CD8, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
