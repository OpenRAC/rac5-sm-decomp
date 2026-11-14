/* LEVEL_22:0x1376D0 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_002E80D0[];
extern Shared D_00166908;
extern int D_001ED9EC;
extern void *D_00153964[1];
extern char D_0017BF80[];
extern char D_001752D8[];
extern void func_060EF0(char *a);
extern void func_137948(void);
extern void func_0609C0(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1376D0(Obj *o)
{
    func_060EF0(D_002E80D0);
    o->block->callback = func_137948;
    if (D_00166908.slot == -1)
        D_00166908.slot = D_001ED9EC;
    o->rec->w0C = 0;
    func_0609C0(D_00153964[0], D_0017BF80, D_001752D8, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
