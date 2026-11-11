/* LEVEL_10:0x17D688 -- placement copy of LEVEL_03_17B0D0.c: clears two status fields, sets a halfword, calls a helper with a float, then calls a second helper. */
struct Obj23 {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x58 - 0x46];
    char *p58;
    char pad2[0x64 - 0x5C];
    unsigned int w64;
    char pad3[0x74 - 0x68];
    unsigned short h74;
};

void func_1201D8(char *p, float f);
void func_17D4C8(struct Obj23 *p);

void func_17D688(struct Obj23 *s0)
{
    int w;

    s0->b45 = 0;
    w = s0->w64;
    w = w & -17;
    w = w & -33;
    s0->h74 = 4;
    s0->w64 = w;
    func_1201D8(s0->p58 + 8, 0.2f);
    func_17D4C8(s0);
}
