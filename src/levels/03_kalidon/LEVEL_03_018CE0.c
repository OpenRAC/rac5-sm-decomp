extern unsigned int D_0021F424;
extern unsigned int D_0021F420;
extern int func_1282D0(int);

void func_018CE0(void)
{
    unsigned int cursor = D_0021F424;
    unsigned int end = D_0021F424 + D_0021F420 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_1282D0(*field);
        cursor += 0x10;
    }
}
