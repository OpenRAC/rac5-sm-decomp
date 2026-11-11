/* LEVEL_08:0x0C9EA8 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_00246A18;
extern int D_00245A14;
extern Overlay D_00377FF8;
extern Gs D_002843D0;
extern Level *D_0023CB2C;
extern float D_00261A40[16];
extern float D_00377F10[16];
extern float D_00377ED0[16];

extern void func_1FE7D8(void);
extern void func_0CA0A8(void);
extern void func_0B9040(float zero, int id, void *out);
extern int func_0B2F78(void *p);
extern int func_0B2FA8(void *p);
extern int func_0B2FD8(void *p);
extern int func_0B3090(void *p);
extern void func_0B5D18(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02FD40(int a, int b);
extern void func_02FEC8(void);
extern void func_0C7CA8(void);
extern void func_0C84B8(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0C9EA8(void)
{
    int info[4];

    D_00245A14 = 0;
    D_00246A18 = 0;
    func_1FE7D8();
    func_0CA0A8();
    func_0B9040(0.0f, 0x14A, info);
    func_0B5D18(&D_00377FF8, func_0B2F78(info), func_0B2FA8(info), func_0B2FD8(info), func_0B3090(info), 0x40602020);
    *(unsigned int *)((char *)&D_00377FF8 + 0x20) |= 0x840;
    D_00377FF8.dirty = 0;
    D_002843D0.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_002843D0.hud->sel = D_002843D0.sel;
    if (D_0023CB2C->lock != 0) {
        func_02FD40(0, 1);
        func_02FEC8();
    }
    D_00377F10[8] = D_00261A40[8];
    D_00377F10[12] = 0.11500000208616257f;
    D_00377F10[9] = D_00261A40[9];
    D_00377F10[11] = D_00261A40[11];
    D_00377F10[1] = D_00261A40[1];
    D_00377F10[2] = D_00261A40[2];
    D_00377F10[3] = D_00261A40[3];
    D_00377F10[4] = D_00261A40[4];
    D_00377F10[6] = D_00261A40[6];
    D_00377F10[7] = D_00261A40[7];
    D_00377F10[15] = D_00261A40[15];
    D_00377F10[0] = 1.0f;
    D_00377F10[10] = 1.0f;
    D_00377F10[14] = 0.0f;
    D_00377F10[13] = 0.0f;
    D_00377F10[5] = 1.0f;
    memset(D_00377ED0, 0, 0x40);
    D_00377ED0[0] = 1.0f;
    D_00377ED0[5] = 1.0f;
    D_00377ED0[10] = 1.0f;
    func_0C7CA8();
    func_0C84B8();
}
