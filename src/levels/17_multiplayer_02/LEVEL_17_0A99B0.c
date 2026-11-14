/* LEVEL_17:0x0A99B0 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_00267C70;
extern void func_0AB628(char *tail);

void func_0A99B0(void)
{
    func_0AB628(D_00267C70.tail);
    D_00267C70.flag = 0;
    D_00267C70.count = 0;
}
