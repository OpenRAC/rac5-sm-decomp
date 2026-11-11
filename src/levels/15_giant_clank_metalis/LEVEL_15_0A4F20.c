extern void func_015750(void *, void *, void *, void *);
extern void func_0A4E80(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_001555D0;

void func_0A4F20(void)
{
    unsigned char buffer[0x90];
    func_015750(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_001555D0.command = 0x1c5;
    D_001555D0.flag = 1;
    func_0A4E80();
}
