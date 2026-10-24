/* LEVEL_19.REL:0x079A40 -- primes the second argument's record, and when
   func_079B70 accepts the first one, ORs the probe's verdict with the
   global's +0x108 word after replaying its +0x134/+0x138 pair. */
typedef struct {
    unsigned char pad0[0x108];
    int i_108;
    unsigned char pad1[0x28];
    float v_134;
    float v_138;
} Obj;

extern Obj *D_001A540C;

extern void func_079880(void *a0);
extern int func_079B70(void *a0);
extern int func_079910(float a, float b);

int func_079A40(void *a0, void *a1)
{
    func_079880(a1);
    if (func_079B70(a0) == 0) {
        return 0;
    }
    return D_001A540C->i_108 |
           func_079910(D_001A540C->v_134, D_001A540C->v_138);
}
