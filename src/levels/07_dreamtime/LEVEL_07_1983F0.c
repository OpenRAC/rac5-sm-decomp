typedef struct { float f00,f04,f08,f0C,f10,f14,f18; } Obj;
typedef struct { char pad0[0x45]; unsigned char b45; char pad1[0x12]; void *p58; } S;
void func_198210(S *s);
void func_1983F0(S *s)
{
    Obj *o = s->p58;
    o->f18 = -0.030000001f;
    func_198210(s);
    s->b45 = 1;
}
