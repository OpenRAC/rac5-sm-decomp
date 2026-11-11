/* LEVEL_10:0x0033B0 -- placement copy of LEVEL_01_003600.c: wraps an angle to one turn, updates flag bits, then forwards to the setter. */
extern float floorf(float x);
struct Ctx { char pad[0x40]; unsigned long long flags; char pad48[0x58]; char sub[1]; };
extern struct Ctx *D_001F8254;
extern void func_003380(char *sub, int a, float x, float y, int b);
void func_0033B0(int a, int b, float x, float y)
{
    float t = x - floorf(x * 0.15915493667125702f + 0.5f) * 6.2831854820251465f;
    if (b != 2) {
        D_001F8254->flags &= ~0x100000LL;
        D_001F8254->flags &= ~0x80000LL;
    }
    if ((unsigned char)(D_001F8254->flags >> 15) & 1) {
        b = 3;
        D_001F8254->flags |= 0x10000LL;
    }
    func_003380(D_001F8254->sub, a, t, y, b);
}
