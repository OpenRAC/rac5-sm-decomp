extern void func_016B90(void *, void *, void *, void *);
extern void func_0B2CC8(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_001AFE48;

void func_0B2DD0(void)
{
    unsigned char buffer[0x90];
    func_016B90(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_001AFE48.command = 0x1c5;
    D_001AFE48.flag = 1;
    func_0B2CC8();
}
