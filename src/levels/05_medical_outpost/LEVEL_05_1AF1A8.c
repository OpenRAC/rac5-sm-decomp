/* LEVEL_05:0x1AF1A8 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_0038F820[];
extern Shared D_001F7E60;
extern int D_00283CEC;
extern void *D_001E3964[1];
extern char D_00214A50[];
extern char D_00206D58[];
extern void func_069840(char *a);
extern void func_1AF450(void);
extern void func_068A20(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1AF1A8(Obj *o)
{
    func_069840(D_0038F820);
    o->block->callback = func_1AF450;
    if (D_001F7E60.slot == -1)
        D_001F7E60.slot = D_00283CEC;
    o->rec->w0C = 0;
    func_068A20(D_001E3964[0], D_00214A50, D_00206D58, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
