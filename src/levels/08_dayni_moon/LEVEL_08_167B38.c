/* LEVEL_08.REL:0x167B38 -- relays the current node's first level. */
typedef struct { char pad[0x58]; float *f_58; } Obj;
extern Obj *D_002505EC;
extern int func_233E00(float input);
int func_167B38(void)
{
    float *p = D_002505EC->f_58;

    return func_233E00(*p);
}
