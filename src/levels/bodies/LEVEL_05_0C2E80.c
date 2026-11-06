extern void func_018600(void *, void *, void *, void *);
extern void func_0C2DE0(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_001EFCD0;

void func_0C2E80(void)
{
    unsigned char buffer[0x90];
    func_018600(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_001EFCD0.command = 0x1c5;
    D_001EFCD0.flag = 1;
    func_0C2DE0();
}
