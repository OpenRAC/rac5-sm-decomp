/* LEVEL_02:0x1D4540 -- passes the object's kind byte to the shared handler with mode 0xB and reports state 3. */
extern void func_1D4568(char *item, unsigned char kind, int mode);

int func_1D4540(char *item)
{
    func_1D4568(item, *(unsigned char *)(item + 0x45), 0xB);
    return 3;
}
