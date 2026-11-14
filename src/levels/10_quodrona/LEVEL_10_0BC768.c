/* LEVEL_10:0x0BC768 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_00331E30;
extern void func_0BDFA8(char *tail);

void func_0BC768(void)
{
    func_0BDFA8(D_00331E30.tail);
    D_00331E30.flag = 0;
    D_00331E30.count = 0;
}
