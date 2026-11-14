/* LEVEL_03:0x0BB208 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_003438B0;
extern void func_0BCA40(char *tail);

void func_0BB208(void)
{
    func_0BCA40(D_003438B0.tail);
    D_003438B0.flag = 0;
    D_003438B0.count = 0;
}
