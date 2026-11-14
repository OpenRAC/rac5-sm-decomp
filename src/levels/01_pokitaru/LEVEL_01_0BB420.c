/* LEVEL_01:0x0BB420 -- resets the shared object: runs the helper on its tail block, then clears its counter word and flag byte. */
typedef struct Shared {
    char pad_00[0x2C];
    unsigned char flag;
    char pad_2D[3];
    int count;
    char tail[1];
} Shared;

extern Shared D_00328A30;
extern void func_0BCC58(char *tail);

void func_0BB420(void)
{
    func_0BCC58(D_00328A30.tail);
    D_00328A30.flag = 0;
    D_00328A30.count = 0;
}
