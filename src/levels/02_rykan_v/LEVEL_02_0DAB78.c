/* LEVEL_02:0x0DAB78 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_00219968;
extern int D_00219964;
extern int D_00219928[][5];
extern void *D_00219974;
extern int D_002199D8;
extern int D_002199DC;
extern int D_00344238;
extern int func_025828(void *, int);
extern int func_025850(void *, int);
extern R *func_024FD0(void *, int);
extern int func_0D9258(int, int);
void func_0DAB78(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_00219928[D_00219968][D_00219964];
    if (!s || !func_025828(s, -1) || func_025850(s, -1)) {
        D_002199D8 = 0;
        D_002199DC = 0;
        return;
    }
    if (s == D_00219974)
        return;
    r = func_024FD0(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_002199D8 = r->f48;
    else
        D_002199D8 = r->f0;
    if (r->f48)
        D_002199DC = r->f4C;
    else
        D_002199DC = r->f4;
    if (!func_0D9258(D_002199D8, D_002199DC))
        D_00344238 = 0;
}
