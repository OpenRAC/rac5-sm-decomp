/* LEVEL_23:0x0B21B8 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_002F9E70;
extern void func_0B39F8(char *tail);

void func_0B21B8(void)
{
    func_0B39F8(D_002F9E70.tail);
    D_002F9E70.flag = 0;
    D_002F9E70.count = 0;
}
