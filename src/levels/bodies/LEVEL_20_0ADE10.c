/* LEVEL_20:0x0ADE10 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_00114F38;
extern int D_00114F34;
extern int D_00114EF8[][5];
extern void *D_00114F44;
extern int D_00114FA8;
extern int D_00114FAC;
extern int D_0019E5F8;
extern int func_01F590(void *, int);
extern int func_01F5B8(void *, int);
extern R *func_01EE10(void *, int);
extern int func_0AC4F0(int, int);
void func_0ADE10(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_00114EF8[D_00114F38][D_00114F34];
    if (!s || !func_01F590(s, -1) || func_01F5B8(s, -1)) {
        D_00114FA8 = 0;
        D_00114FAC = 0;
        return;
    }
    if (s == D_00114F44)
        return;
    r = func_01EE10(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_00114FA8 = r->f48;
    else
        D_00114FA8 = r->f0;
    if (r->f48)
        D_00114FAC = r->f4C;
    else
        D_00114FAC = r->f4;
    if (!func_0AC4F0(D_00114FA8, D_00114FAC))
        D_0019E5F8 = 0;
}
