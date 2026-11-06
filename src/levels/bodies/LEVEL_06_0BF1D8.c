extern void func_0177E0(void *, void *, void *, void *);
extern void func_0BF138(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_001EF850;

void func_0BF1D8(void)
{
    unsigned char buffer[0x90];
    func_0177E0(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_001EF850.command = 0x1c5;
    D_001EF850.flag = 1;
    func_0BF138();
}
