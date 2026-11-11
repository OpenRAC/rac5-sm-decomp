/* LEVEL_04:0x0009E8 -- placement copy of LEVEL_01_000BE0.c: resets the two slot records and marks the active ones. */
typedef struct {
    char b[0x40];
} Blob;

typedef struct {
    int f0;
    char pad0[0x80 - 4];
    int f80;
    int f84;
    float f88;
    float f8C;
    char pad1[0xF0 - 0x90];
    int fF0;
    char pad2[0x10C - 0xF4];
    float f10C;
    float f110;
    char pad3[2];
    unsigned char f116;
    char pad4;
} Slot;

extern Slot D_002460E0[];
extern Slot *D_002083C8[1];
extern unsigned D_002083CC;
extern float D_0020FD78;
extern Blob D_00231740;

extern void *memset(void *p, int c, unsigned n);
extern void func_000E08(int i);
extern void func_001218(float a);

void CAMERA_Reset__Fv(void)
{
    unsigned i;
    unsigned j;

    D_0020FD78 = 1.0f;
    memset(D_002460E0, 0, 0x230);
    D_002460E0[0].f88 = 512.0f;
    D_002460E0[0].f8C = 416.0f;
    D_002460E0[0].f84 = 0;
    D_002460E0[0].f80 = 0;
    for (i = 0; i < 2; i++) {
        func_000E08(i);
        D_002083C8[0]->f110 = 10000.0f;
        D_002083C8[0]->f10C = 1.0f;
        D_002083C8[0]->fF0 = 0;
        *(Blob *)D_002083C8[0] = D_00231740;
        D_002083C8[0]->f116 = 0;
        func_001218(0.5497787594795227f);
    }
    func_000E08(0);
    for (j = 0; j < D_002083CC; j++) {
        D_002460E0[j].f116 = 1;
    }
}
