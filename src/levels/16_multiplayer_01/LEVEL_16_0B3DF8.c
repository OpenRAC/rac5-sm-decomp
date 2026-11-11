extern void func_0174D0(void *, void *, void *, void *);
extern void func_0B3CF0(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_001AE9C8;

void func_0B3DF8(void)
{
    unsigned char buffer[0x90];
    func_0174D0(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_001AE9C8.command = 0x1c5;
    D_001AE9C8.flag = 1;
    func_0B3CF0();
}
