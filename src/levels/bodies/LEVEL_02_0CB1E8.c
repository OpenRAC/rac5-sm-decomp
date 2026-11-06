extern void func_0199C0(void *, void *, void *, void *);
extern void func_0CB148(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_00215910;

void func_0CB1E8(void)
{
    unsigned char buffer[0x90];
    func_0199C0(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_00215910.command = 0x1c5;
    D_00215910.flag = 1;
    func_0CB148();
}
