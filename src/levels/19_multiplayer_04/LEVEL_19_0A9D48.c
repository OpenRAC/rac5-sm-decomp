/* LEVEL_19:0x0A9D48 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_00276AF0;
extern void func_0AB9C0(char *tail);

void func_0A9D48(void)
{
    func_0AB9C0(D_00276AF0.tail);
    D_00276AF0.flag = 0;
    D_00276AF0.count = 0;
}
