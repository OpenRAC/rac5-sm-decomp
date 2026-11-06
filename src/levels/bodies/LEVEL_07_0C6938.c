extern void func_0196A0(void *, void *, void *, void *);
extern void func_0C6898(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_00214C50;

void func_0C6938(void)
{
    unsigned char buffer[0x90];
    func_0196A0(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_00214C50.command = 0x1c5;
    D_00214C50.flag = 1;
    func_0C6898();
}
