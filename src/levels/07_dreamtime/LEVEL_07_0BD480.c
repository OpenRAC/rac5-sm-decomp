/* LEVEL_07:0x0BD480 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_0033E330;
extern void func_0BECB8(char *tail);

void func_0BD480(void)
{
    func_0BECB8(D_0033E330.tail);
    D_0033E330.flag = 0;
    D_0033E330.count = 0;
}
