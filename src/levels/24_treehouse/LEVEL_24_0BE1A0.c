extern void func_017B48(void *, void *, void *, void *);
extern void func_0BE100(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_001D15D0;

void func_0BE1A0(void)
{
    unsigned char buffer[0x90];
    func_017B48(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_001D15D0.command = 0x1c5;
    D_001D15D0.flag = 1;
    func_0BE100();
}
