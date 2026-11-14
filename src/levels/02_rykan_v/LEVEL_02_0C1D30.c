/* LEVEL_02:0x0C1D30 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_0033FF30;
extern void func_0C3568(char *tail);

void func_0C1D30(void)
{
    func_0C3568(D_0033FF30.tail);
    D_0033FF30.flag = 0;
    D_0033FF30.count = 0;
}
