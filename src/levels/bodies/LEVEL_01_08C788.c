/* LEVEL_01:0x08C788 -- when the object's byte field equals 2, calls a helper, then calls a second helper twice with the object's sub-record address. */
extern void *func_08BD00(unsigned int a0, int a1);
extern void func_125D40(char *a0, void *a1, char *a2);

void func_08C788(char *a0, void *a1)
{
    void *r;

    if (*(unsigned char *)(a0 + 0x18) != 2) {
        return;
    }
    r = func_08BD00(0, 1);
    a0 = a0 + 0xC;
    func_125D40(a0, r, a0);
    func_125D40(a0, a1, a0);
}
