extern void func_016EF0(void *, void *, void *, void *);
extern void func_0B3230(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_001A1FC8;

void func_0B3338(void)
{
    unsigned char buffer[0x90];
    func_016EF0(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_001A1FC8.command = 0x1c5;
    D_001A1FC8.flag = 1;
    func_0B3230();
}
