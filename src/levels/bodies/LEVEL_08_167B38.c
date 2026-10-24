/* LEVEL_08.REL:0x167B38 -- relays the current node's first level. */
typedef struct { char pad[0x58]; float *f_58; } Obj;
extern Obj *D_002505EC;
extern void func_233E00(float *a0, float f12);
void func_167B38(void)
{
    float *p = D_002505EC->f_58;

    func_233E00(p, *p);
}
