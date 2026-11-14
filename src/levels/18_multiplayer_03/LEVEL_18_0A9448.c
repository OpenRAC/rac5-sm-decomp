/* LEVEL_18:0x0A9448 -- placement copy of LEVEL_01_0BB420.c: resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_00276CF0;
extern void func_0AB0C0(char *tail);

void func_0A9448(void)
{
    func_0AB0C0(D_00276CF0.tail);
    D_00276CF0.flag = 0;
    D_00276CF0.count = 0;
}
