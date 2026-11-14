/* LEVEL_08:0x1E8FA0 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_003EA7C8[];
extern Shared D_00252548;
extern int D_002E70AC;
extern void *D_0023D4A4[1];
extern char D_00275350[];
extern char D_00261AD8[];
extern void func_071420(char *a);
extern void func_1E9248(void);
extern void func_070600(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1E8FA0(Obj *o)
{
    func_071420(D_003EA7C8);
    o->block->callback = func_1E9248;
    if (D_00252548.slot == -1)
        D_00252548.slot = D_002E70AC;
    o->rec->w0C = 0;
    func_070600(D_0023D4A4[0], D_00275350, D_00261AD8, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
