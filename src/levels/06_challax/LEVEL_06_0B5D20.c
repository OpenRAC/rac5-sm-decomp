/* LEVEL_06:0x0B5D20 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_003157B0;
extern void func_0B7558(char *tail);

void func_0B5D20(void)
{
    func_0B7558(D_003157B0.tail);
    D_003157B0.flag = 0;
    D_003157B0.count = 0;
}
