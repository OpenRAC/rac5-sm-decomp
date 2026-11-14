/* LEVEL_20:0x0949A0 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_0019A1B0;
extern void func_096618(char *tail);

void func_0949A0(void)
{
    func_096618(D_0019A1B0.tail);
    D_0019A1B0.flag = 0;
    D_0019A1B0.count = 0;
}
