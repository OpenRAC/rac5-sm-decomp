/* LEVEL_17:0x0AD950 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_0019F1D8;
extern int D_0019E1D4;
extern Overlay D_00267FB8;
extern Gs D_001D5390;
extern Level *D_001950B4;
extern float D_001C0100[16];
extern float D_00267ED0[16];
extern float D_00267E90[16];

extern void func_172F28(void);
extern void func_0ADB50(void);
extern void func_09C2F0(float zero, int id, void *out);
extern int func_096208(void *p);
extern int func_096238(void *p);
extern int func_096268(void *p);
extern int func_096320(void *p);
extern void func_098FC8(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02C758(int a, int b);
extern void func_02C8E0(void);
extern void func_0AB750(void);
extern void func_0ABF60(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0AD950(void)
{
    int info[4];

    D_0019E1D4 = 0;
    D_0019F1D8 = 0;
    func_172F28();
    func_0ADB50();
    func_09C2F0(0.0f, 0x14A, info);
    func_098FC8(&D_00267FB8, func_096208(info), func_096238(info), func_096268(info), func_096320(info), 0x40602020);
    *(unsigned int *)((char *)&D_00267FB8 + 0x20) |= 0x840;
    D_00267FB8.dirty = 0;
    D_001D5390.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_001D5390.hud->sel = D_001D5390.sel;
    if (D_001950B4->lock != 0) {
        func_02C758(0, 1);
        func_02C8E0();
    }
    D_00267ED0[8] = D_001C0100[8];
    D_00267ED0[12] = 0.11500000208616257f;
    D_00267ED0[9] = D_001C0100[9];
    D_00267ED0[11] = D_001C0100[11];
    D_00267ED0[1] = D_001C0100[1];
    D_00267ED0[2] = D_001C0100[2];
    D_00267ED0[3] = D_001C0100[3];
    D_00267ED0[4] = D_001C0100[4];
    D_00267ED0[6] = D_001C0100[6];
    D_00267ED0[7] = D_001C0100[7];
    D_00267ED0[15] = D_001C0100[15];
    D_00267ED0[0] = 1.0f;
    D_00267ED0[10] = 1.0f;
    D_00267ED0[14] = 0.0f;
    D_00267ED0[13] = 0.0f;
    D_00267ED0[5] = 1.0f;
    memset(D_00267E90, 0, 0x40);
    D_00267E90[0] = 1.0f;
    D_00267E90[5] = 1.0f;
    D_00267E90[10] = 1.0f;
    func_0AB750();
    func_0ABF60();
}
