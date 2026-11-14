/* LEVEL_04:0x1BFE50 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_003B3680[];
extern Shared D_002224C0;
extern int D_002B262C;
extern void *D_0020DAA4[1];
extern char D_00240C88[];
extern char D_002317D8[];
extern void func_06D7B8(char *a);
extern void func_1C00C8(void);
extern void func_06C820(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1BFE50(Obj *o)
{
    func_06D7B8(D_003B3680);
    o->block->callback = func_1C00C8;
    if (D_002224C0.slot == -1)
        D_002224C0.slot = D_002B262C;
    o->rec->w0C = 0;
    func_06C820(D_0020DAA4[0], D_00240C88, D_002317D8, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
