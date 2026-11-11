/* LEVEL_08:0x1B51A0 -- stores a byte, then calls a float-argument helper with the value. */
typedef struct { char pad[0x45]; unsigned char v; } S;
extern void func_084C98(float, float, S *, unsigned char, int, int);

void func_1B51A0(S *s, int value)
{
    s->v = value;
    func_084C98(0.15f, 0.0f, s, s->v, 0, 1);
}
