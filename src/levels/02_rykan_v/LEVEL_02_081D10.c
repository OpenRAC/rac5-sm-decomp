/* LEVEL_02:0x081D10 -- the twelve-byte vector is packed on the stack with
   the extra float, then handed to the next routine. */
typedef struct {
    float f[2];
    int flag;
} Vec12;

typedef struct {
    Vec12 vec;
    float extra;
} Vec16;

extern void func_081D48(Vec16 *p);

void func_081D10(Vec12 *src, float extra)
{
    Vec16 v;

    v.vec = *src;
    v.extra = extra;
    func_081D48(&v);
}
