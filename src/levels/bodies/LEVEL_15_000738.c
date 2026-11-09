/* LEVEL_15:0x000738 -- placement copy of LEVEL_01_000BE0.c: resets the two slot records and marks the active ones. */
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

extern Slot D_00173A60[];
extern Slot *D_00143EB0[1];
extern unsigned D_00143EB4;
extern float D_0014B538;
extern Blob D_0016C540;

extern void *memset(void *p, int c, unsigned n);
extern void func_000B58(int i);
extern void func_000F68(float a);

void func_000738(void)
{
    unsigned i;
    unsigned j;

    D_0014B538 = 1.0f;
    memset(D_00173A60, 0, 0x230);
    D_00173A60[0].f88 = 512.0f;
    D_00173A60[0].f8C = 416.0f;
    D_00173A60[0].f84 = 0;
    D_00173A60[0].f80 = 0;
    for (i = 0; i < 2; i++) {
        func_000B58(i);
        D_00143EB0[0]->f110 = 10000.0f;
        D_00143EB0[0]->f10C = 1.0f;
        D_00143EB0[0]->fF0 = 0;
        *(Blob *)D_00143EB0[0] = D_0016C540;
        D_00143EB0[0]->f116 = 0;
        func_000F68(0.5497787594795227f);
    }
    func_000B58(0);
    for (j = 0; j < D_00143EB4; j++) {
        D_00173A60[j].f116 = 1;
    }
}
