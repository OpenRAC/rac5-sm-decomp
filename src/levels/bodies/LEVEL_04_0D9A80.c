/* LEVEL_04:0x0D9A80 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_0021DE68;
extern int D_0021DE64;
extern int D_0021DE28[][5];
extern void *D_0021DE74;
extern int D_0021DED8;
extern int D_0021DEDC;
extern int D_00347538;
extern int func_024B48(void *, int);
extern int func_024B70(void *, int);
extern R *func_0242F0(void *, int);
extern int func_0D8160(int, int);
void func_0D9A80(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_0021DE28[D_0021DE68][D_0021DE64];
    if (!s || !func_024B48(s, -1) || func_024B70(s, -1)) {
        D_0021DED8 = 0;
        D_0021DEDC = 0;
        return;
    }
    if (s == D_0021DE74)
        return;
    r = func_0242F0(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_0021DED8 = r->f48;
    else
        D_0021DED8 = r->f0;
    if (r->f48)
        D_0021DEDC = r->f4C;
    else
        D_0021DEDC = r->f4;
    if (!func_0D8160(D_0021DED8, D_0021DEDC))
        D_00347538 = 0;
}
