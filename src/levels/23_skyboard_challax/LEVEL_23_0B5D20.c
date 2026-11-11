/* LEVEL_23:0x0B5D20 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_001D0F58;
extern int D_001CFF54;
extern Overlay D_002FA1B8;
extern Gs D_002025C0;
extern Level *D_001C73AC;
extern float D_001EAF40[16];
extern float D_002FA0D0[16];
extern float D_002FA090[16];

extern void func_19C818(void);
extern void func_0B5F20(void);
extern void func_0A5478(float zero, int id, void *out);
extern int func_09F3F0(void *p);
extern int func_09F420(void *p);
extern int func_09F450(void *p);
extern int func_09F508(void *p);
extern void func_0A2150(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02CF50(int a, int b);
extern void func_02D0D8(void);
extern void func_0B3B20(void);
extern void func_0B4330(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0B5D20(void)
{
    int info[4];

    D_001CFF54 = 0;
    D_001D0F58 = 0;
    func_19C818();
    func_0B5F20();
    func_0A5478(0.0f, 0x14A, info);
    func_0A2150(&D_002FA1B8, func_09F3F0(info), func_09F420(info), func_09F450(info), func_09F508(info), 0x40602020);
    *(unsigned int *)((char *)&D_002FA1B8 + 0x20) |= 0x840;
    D_002FA1B8.dirty = 0;
    D_002025C0.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_002025C0.hud->sel = D_002025C0.sel;
    if (D_001C73AC->lock != 0) {
        func_02CF50(0, 1);
        func_02D0D8();
    }
    D_002FA0D0[8] = D_001EAF40[8];
    D_002FA0D0[12] = 0.11500000208616257f;
    D_002FA0D0[9] = D_001EAF40[9];
    D_002FA0D0[11] = D_001EAF40[11];
    D_002FA0D0[1] = D_001EAF40[1];
    D_002FA0D0[2] = D_001EAF40[2];
    D_002FA0D0[3] = D_001EAF40[3];
    D_002FA0D0[4] = D_001EAF40[4];
    D_002FA0D0[6] = D_001EAF40[6];
    D_002FA0D0[7] = D_001EAF40[7];
    D_002FA0D0[15] = D_001EAF40[15];
    D_002FA0D0[0] = 1.0f;
    D_002FA0D0[10] = 1.0f;
    D_002FA0D0[14] = 0.0f;
    D_002FA0D0[13] = 0.0f;
    D_002FA0D0[5] = 1.0f;
    memset(D_002FA090, 0, 0x40);
    D_002FA090[0] = 1.0f;
    D_002FA090[5] = 1.0f;
    D_002FA090[10] = 1.0f;
    func_0B3B20();
    func_0B4330();
}
