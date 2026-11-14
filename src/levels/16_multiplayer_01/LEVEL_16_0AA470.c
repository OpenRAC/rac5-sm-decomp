/* LEVEL_16:0x0AA470 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_00276970;
extern void func_0AC0E8(char *tail);

void func_0AA470(void)
{
    func_0AC0E8(D_00276970.tail);
    D_00276970.flag = 0;
    D_00276970.count = 0;
}
