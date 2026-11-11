extern int func_019920(void *a0, void *a1, void *a2, void *a3);
extern void func_0CF760(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_00249810;

void func_0CF800(void)
{
    unsigned char buffer[0x90];
    func_019920(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_00249810.command = 0x1c5;
    D_00249810.flag = 1;
    func_0CF760();
}
