/* LEVEL_23:0x196348 -- placement copy of LEVEL_01_1B2E50.c: installs the object's callback, seeds the shared slot from a global when it is unset, clears the record's first field and queues the effect with fixed parameters; returns 1. */
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

extern char D_003663C8[];
extern Shared D_001DC1D0;
extern int D_0026926C;
extern void *D_001C79E4[1];
extern char D_001F6720[];
extern char D_001EAFD8[];
extern void func_065380(char *a);
extern void func_1965C0(void);
extern void func_064570(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_196348(Obj *o)
{
    func_065380(D_003663C8);
    o->block->callback = func_1965C0;
    if (D_001DC1D0.slot == -1)
        D_001DC1D0.slot = D_0026926C;
    o->rec->w0C = 0;
    func_064570(D_001C79E4[0], D_001F6720, D_001EAFD8, 1, 1.2000000476837158f, 0.30000001192092896f, 10.0f);
    return 1;
}
