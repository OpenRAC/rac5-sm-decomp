extern int func_0185C8(void *a0, void *a1, void *a2, void *a3);
extern void func_0C5B88(void);

typedef struct {
    int command;
    unsigned char reserved[0xc8];
    unsigned char flag;
} GlobalState;

extern GlobalState D_00209950;

void func_0C5C28(void)
{
    unsigned char buffer[0x90];
    func_0185C8(buffer, buffer + 0x40, buffer + 0x80, buffer + 0x82);
    D_00209950.command = 0x1c5;
    D_00209950.flag = 1;
    func_0C5B88();
}
