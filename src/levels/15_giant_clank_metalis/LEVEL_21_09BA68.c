/* LEVEL_21:0x09BA68 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_00240270;
extern void func_09D2A0(char *tail);

void func_09BA68(void)
{
    func_09D2A0(D_00240270.tail);
    D_00240270.flag = 0;
    D_00240270.count = 0;
}
