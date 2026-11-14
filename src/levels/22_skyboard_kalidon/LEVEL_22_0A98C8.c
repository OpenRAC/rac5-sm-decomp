/* LEVEL_22:0x0A98C8 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_0027E5F0;
extern void func_0AB108(char *tail);

void func_0A98C8(void)
{
    func_0AB108(D_0027E5F0.tail);
    D_0027E5F0.flag = 0;
    D_0027E5F0.count = 0;
}
