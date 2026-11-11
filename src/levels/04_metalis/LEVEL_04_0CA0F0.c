extern int func_018C98(void *a0, void *a1, void *a2, void *a3);
extern void func_0CA050(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_00219E10;

void func_0CA0F0(void)
{
    unsigned char buffer[0x90];
    func_018C98(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_00219E10.command = 0x1c5;
    D_00219E10.flag = 1;
    func_0CA050();
}
