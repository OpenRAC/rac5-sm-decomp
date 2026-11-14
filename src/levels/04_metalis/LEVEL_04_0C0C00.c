/* LEVEL_04:0x0C0C00 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_00343230;
extern void func_0C2470(char *tail);

void func_0C0C00(void)
{
    func_0C2470(D_00343230.tail);
    D_00343230.flag = 0;
    D_00343230.count = 0;
}
