/* LEVEL_24:0x0B8848 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_001CE7D8;
extern int D_001CD7D4;
extern Overlay D_002F4C38;
extern Gs D_00201040;
extern Level *D_001C4C2C;
extern float D_001E8B40[16];
extern float D_002F4B50[16];
extern float D_002F4B10[16];

extern void func_19B380(void);
extern void func_0B8A48(void);
extern void func_0A7F80(float zero, int id, void *out);
extern int func_0A1EF8(void *p);
extern int func_0A1F28(void *p);
extern int func_0A1F58(void *p);
extern int func_0A2010(void *p);
extern void func_0A4C58(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02CB08(int a, int b);
extern void func_02CC90(void);
extern void func_0B6648(void);
extern void func_0B6E58(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0B8848(void)
{
    int info[4];

    D_001CD7D4 = 0;
    D_001CE7D8 = 0;
    func_19B380();
    func_0B8A48();
    func_0A7F80(0.0f, 0x14A, info);
    func_0A4C58(&D_002F4C38, func_0A1EF8(info), func_0A1F28(info), func_0A1F58(info), func_0A2010(info), 0x40602020);
    *(unsigned int *)((char *)&D_002F4C38 + 0x20) |= 0x840;
    D_002F4C38.dirty = 0;
    D_00201040.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_00201040.hud->sel = D_00201040.sel;
    if (D_001C4C2C->lock != 0) {
        func_02CB08(0, 1);
        func_02CC90();
    }
    D_002F4B50[8] = D_001E8B40[8];
    D_002F4B50[12] = 0.11500000208616257f;
    D_002F4B50[9] = D_001E8B40[9];
    D_002F4B50[11] = D_001E8B40[11];
    D_002F4B50[1] = D_001E8B40[1];
    D_002F4B50[2] = D_001E8B40[2];
    D_002F4B50[3] = D_001E8B40[3];
    D_002F4B50[4] = D_001E8B40[4];
    D_002F4B50[6] = D_001E8B40[6];
    D_002F4B50[7] = D_001E8B40[7];
    D_002F4B50[15] = D_001E8B40[15];
    D_002F4B50[0] = 1.0f;
    D_002F4B50[10] = 1.0f;
    D_002F4B50[14] = 0.0f;
    D_002F4B50[13] = 0.0f;
    D_002F4B50[5] = 1.0f;
    memset(D_002F4B10, 0, 0x40);
    D_002F4B10[0] = 1.0f;
    D_002F4B10[5] = 1.0f;
    D_002F4B10[10] = 1.0f;
    func_0B6648();
    func_0B6E58();
}
