/* LEVEL_06:0x0B9880 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
typedef struct Overlay {
    char pad_00[0x20];
    unsigned int flags;
    char pad_24[0x15];
    unsigned char dirty;
} Overlay;

typedef struct Hud {
    char pad_00[0x74];
    short sel;
} Hud;

typedef struct Gs {
    char pad_000[0x10C];
    unsigned short sel;
    char pad_10E[0x48E];
    Hud *hud;
    char pad_5A0[0x3C0];
    unsigned long long mask;
} Gs;

typedef struct Level {
    char pad_00[0x1C7E];
    char lock;
} Level;

extern int D_001ECA58;
extern int D_001EBA54;
extern Overlay D_00315AF8;
extern Gs D_00221EC0;
extern Level *D_001E2EAC;
extern float D_00206C40[16];
extern float D_00315A10[16];
extern float D_003159D0[16];

extern void func_1B3888(void);
extern void func_0B9A80(void);
extern void func_0A8ED8(float zero, int id, void *out);
extern int func_0A2E50(void *p);
extern int func_0A2E80(void *p);
extern int func_0A2EB0(void *p);
extern int func_0A2F68(void *p);
extern void func_0A5BB0(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02D9A8(int a, int b);
extern void func_02DB30(void);
extern void func_0B7680(void);
extern void func_0B7E90(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0B9880(void)
{
    int info[4];

    D_001EBA54 = 0;
    D_001ECA58 = 0;
    func_1B3888();
    func_0B9A80();
    func_0A8ED8(0.0f, 0x14A, info);
    func_0A5BB0(&D_00315AF8, func_0A2E50(info), func_0A2E80(info), func_0A2EB0(info), func_0A2F68(info), 0x40602020);
    *(unsigned int *)((char *)&D_00315AF8 + 0x20) |= 0x840;
    D_00315AF8.dirty = 0;
    D_00221EC0.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_00221EC0.hud->sel = D_00221EC0.sel;
    if (D_001E2EAC->lock != 0) {
        func_02D9A8(0, 1);
        func_02DB30();
    }
    D_00315A10[8] = D_00206C40[8];
    D_00315A10[12] = 0.11500000208616257f;
    D_00315A10[9] = D_00206C40[9];
    D_00315A10[11] = D_00206C40[11];
    D_00315A10[1] = D_00206C40[1];
    D_00315A10[2] = D_00206C40[2];
    D_00315A10[3] = D_00206C40[3];
    D_00315A10[4] = D_00206C40[4];
    D_00315A10[6] = D_00206C40[6];
    D_00315A10[7] = D_00206C40[7];
    D_00315A10[15] = D_00206C40[15];
    D_00315A10[0] = 1.0f;
    D_00315A10[10] = 1.0f;
    D_00315A10[14] = 0.0f;
    D_00315A10[13] = 0.0f;
    D_00315A10[5] = 1.0f;
    memset(D_003159D0, 0, 0x40);
    D_003159D0[0] = 1.0f;
    D_003159D0[5] = 1.0f;
    D_003159D0[10] = 1.0f;
    func_0B7680();
    func_0B7E90();
}
