/* LEVEL_21:0x003158 -- placement copy of LEVEL_01_003600.c: wraps an angle to one turn, updates flag bits, then forwards to the setter. */
extern float floorf(float x);
struct Ctx { char pad[0x40]; unsigned long long flags; char pad48[0x58]; char sub[1]; };
extern struct Ctx *D_00143EBC;
extern void func_003128(char *sub, int a, float x, float y, int b);
void func_003158(int a, int b, float x, float y)
{
    float t = x - floorf(x * 0.15915493667125702f + 0.5f) * 6.2831854820251465f;
    if (b != 2) {
        D_00143EBC->flags &= ~0x100000LL;
        D_00143EBC->flags &= ~0x80000LL;
    }
    if ((unsigned char)(D_00143EBC->flags >> 15) & 1) {
        b = 3;
        D_00143EBC->flags |= 0x10000LL;
    }
    func_003128(D_00143EBC->sub, a, t, y, b);
}
