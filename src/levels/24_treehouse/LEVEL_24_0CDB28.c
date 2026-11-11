/* LEVEL_24:0x0CDB28 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_001D5628;
extern int D_001D5624;
extern int D_001D55E8[][5];
extern void *D_001D5634;
extern int D_001D5698;
extern int D_001D569C;
extern int D_002F8BF8;
extern int func_022CA0(void *, int);
extern int func_022CC8(void *, int);
extern R *func_022448(void *, int);
extern int func_0CC208(int, int);
void func_0CDB28(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001D55E8[D_001D5628][D_001D5624];
    if (!s || !func_022CA0(s, -1) || func_022CC8(s, -1)) {
        D_001D5698 = 0;
        D_001D569C = 0;
        return;
    }
    if (s == D_001D5634)
        return;
    r = func_022448(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_001D5698 = r->f48;
    else
        D_001D5698 = r->f0;
    if (r->f48)
        D_001D569C = r->f4C;
    else
        D_001D569C = r->f4;
    if (!func_0CC208(D_001D5698, D_001D569C))
        D_002F8BF8 = 0;
}
