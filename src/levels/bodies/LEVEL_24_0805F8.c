/* LEVEL_24:0x0805F8 -- placement copy of FRONTEND_004BD0.c: resets the input state block when permitted. */
typedef struct {
    char pad[8];
    unsigned char b[4];
    char rest[0x38];
} Blk148;
typedef struct {
    char pad0[0x10C];
    unsigned char b0[4];
    char pad1[0x148 - 0x110];
    Blk148 s148;
    char pad2[0x1D0 - 0x18C];
    char blk1D0[0x10];
    char blk1E0[0xC];
    void *i1EC;
    void *i1F0;
    void *i1F4;
    void *i1F8;
    void *i1FC;
} State;
extern State *D_001C6EDC;
extern int func_081350(int x);
extern int func_0810E8(void);
extern void *memset(void *p, int c, unsigned n);

int func_0805F8(int x)
{
    if (func_081350(x) == 0) {
        if (func_0810E8()) {
            return 0;
        }
        if (x) {
            return 0;
        }
    }
    memset(&D_001C6EDC->s148, 0, 0x44);
    D_001C6EDC->s148.b[0] = 0x80;
    D_001C6EDC->s148.b[1] = 0x80;
    D_001C6EDC->s148.b[2] = 0x80;
    D_001C6EDC->s148.b[3] = 0x80;
    memset(D_001C6EDC->blk1E0, 0, 0x10);
    *(unsigned *)((char *)D_001C6EDC + 0x1EC) = 0xFFFFFFFF;
    *(unsigned *)((char *)D_001C6EDC + 0x1F8) = 0xFFFFFFFF;
    *(int *)((char *)D_001C6EDC + 0x1FC) = 0;
    memset(D_001C6EDC->blk1D0, 0, 0x10);
    *(int *)((char *)D_001C6EDC + 0x1F4) = 0;
    D_001C6EDC->b0[0] = 0x80;
    D_001C6EDC->b0[1] = 0x80;
    D_001C6EDC->b0[2] = 0x80;
    D_001C6EDC->b0[3] = 0x80;
    return 1;
}
