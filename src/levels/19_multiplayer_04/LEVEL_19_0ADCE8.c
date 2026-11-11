/* LEVEL_19:0x0ADCE8 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_001ACD58;
extern int D_001ABD54;
extern Overlay D_00276E38;
extern Gs D_001E4210;
extern Level *D_001A2C34;
extern float D_001CDE80[16];
extern float D_00276D50[16];
extern float D_00276D10[16];

extern void func_17C578(void);
extern void func_0ADEE8(void);
extern void func_09C688(float zero, int id, void *out);
extern int func_0965A0(void *p);
extern int func_0965D0(void *p);
extern int func_096600(void *p);
extern int func_0966B8(void *p);
extern void func_099360(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02CB80(int a, int b);
extern void func_02CD08(void);
extern void func_0ABAE8(void);
extern void func_0AC2F8(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0ADCE8(void)
{
    int info[4];

    D_001ABD54 = 0;
    D_001ACD58 = 0;
    func_17C578();
    func_0ADEE8();
    func_09C688(0.0f, 0x14A, info);
    func_099360(&D_00276E38, func_0965A0(info), func_0965D0(info), func_096600(info), func_0966B8(info), 0x40602020);
    *(unsigned int *)((char *)&D_00276E38 + 0x20) |= 0x840;
    D_00276E38.dirty = 0;
    D_001E4210.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_001E4210.hud->sel = D_001E4210.sel;
    if (D_001A2C34->lock != 0) {
        func_02CB80(0, 1);
        func_02CD08();
    }
    D_00276D50[8] = D_001CDE80[8];
    D_00276D50[12] = 0.11500000208616257f;
    D_00276D50[9] = D_001CDE80[9];
    D_00276D50[11] = D_001CDE80[11];
    D_00276D50[1] = D_001CDE80[1];
    D_00276D50[2] = D_001CDE80[2];
    D_00276D50[3] = D_001CDE80[3];
    D_00276D50[4] = D_001CDE80[4];
    D_00276D50[6] = D_001CDE80[6];
    D_00276D50[7] = D_001CDE80[7];
    D_00276D50[15] = D_001CDE80[15];
    D_00276D50[0] = 1.0f;
    D_00276D50[10] = 1.0f;
    D_00276D50[14] = 0.0f;
    D_00276D50[13] = 0.0f;
    D_00276D50[5] = 1.0f;
    memset(D_00276D10, 0, 0x40);
    D_00276D10[0] = 1.0f;
    D_00276D10[5] = 1.0f;
    D_00276D10[10] = 1.0f;
    func_0ABAE8();
    func_0AC2F8();
}
