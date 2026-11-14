/* LEVEL_08:0x0C6310 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_00377CB0;
extern void func_0C7B80(char *tail);

void func_0C6310(void)
{
    func_0C7B80(D_00377CB0.tail);
    D_00377CB0.flag = 0;
    D_00377CB0.count = 0;
}
