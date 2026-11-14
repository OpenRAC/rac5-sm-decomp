/* LEVEL_24:0x18EA78 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_00361FA8[];
extern Shared D_001D9C40;
extern int D_00263CEC;
extern void *D_001C5264[1];
extern char D_001F3FE8[];
extern char D_001E8BD8[];
extern void func_065218(char *a);
extern void func_18ECF0(void);
extern void func_064408(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_18EA78(Obj *o)
{
    func_065218(D_00361FA8);
    o->block->callback = func_18ECF0;
    if (D_001D9C40.slot == -1)
        D_001D9C40.slot = D_00263CEC;
    o->rec->w0C = 0;
    func_064408(D_001C5264[0], D_001F3FE8, D_001E8BD8, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
