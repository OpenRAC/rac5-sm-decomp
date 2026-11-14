/* LEVEL_05:0x0B99C8 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_003148F0;
extern void func_0BB200(char *tail);

void func_0B99C8(void)
{
    func_0BB200(D_003148F0.tail);
    D_003148F0.flag = 0;
    D_003148F0.count = 0;
}
