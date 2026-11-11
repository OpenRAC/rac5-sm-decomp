/* LEVEL_23:0x0CB018 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_001D7DA8;
extern int D_001D7DA4;
extern int D_001D7D68[][5];
extern void *D_001D7DB4;
extern int D_001D7E18;
extern int D_001D7E1C;
extern int D_002FE178;
extern int func_022F68(void *, int);
extern int func_022F90(void *, int);
extern R *func_022710(void *, int);
extern int func_0C96F8(int, int);
void func_0CB018(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001D7D68[D_001D7DA8][D_001D7DA4];
    if (!s || !func_022F68(s, -1) || func_022F90(s, -1)) {
        D_001D7E18 = 0;
        D_001D7E1C = 0;
        return;
    }
    if (s == D_001D7DB4)
        return;
    r = func_022710(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_001D7E18 = r->f48;
    else
        D_001D7E18 = r->f0;
    if (r->f48)
        D_001D7E1C = r->f4C;
    else
        D_001D7E1C = r->f4;
    if (!func_0C96F8(D_001D7E18, D_001D7E1C))
        D_002FE178 = 0;
}
