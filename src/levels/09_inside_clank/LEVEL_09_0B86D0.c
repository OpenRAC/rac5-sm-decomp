/* LEVEL_09:0x0B86D0 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_003101B0;
extern void func_0B9F08(char *tail);

void func_0B86D0(void)
{
    func_0B9F08(D_003101B0.tail);
    D_003101B0.flag = 0;
    D_003101B0.count = 0;
}
