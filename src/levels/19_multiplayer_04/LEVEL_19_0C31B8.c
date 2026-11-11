/* LEVEL_19:0x0C31B8 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_001B39D8;
extern int D_001B39D4;
extern int D_001B3998[][5];
extern void *D_001B39E4;
extern int D_001B3A48;
extern int D_001B3A4C;
extern int D_0027AF38;
extern int func_0224D0(void *, int);
extern int func_0224F8(void *, int);
extern R *func_021D50(void *, int);
extern int func_0C1898(int, int);
void func_0C31B8(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001B3998[D_001B39D8][D_001B39D4];
    if (!s || !func_0224D0(s, -1) || func_0224F8(s, -1)) {
        D_001B3A48 = 0;
        D_001B3A4C = 0;
        return;
    }
    if (s == D_001B39E4)
        return;
    r = func_021D50(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_001B3A48 = r->f48;
    else
        D_001B3A48 = r->f0;
    if (r->f48)
        D_001B3A4C = r->f4C;
    else
        D_001B3A4C = r->f4;
    if (!func_0C1898(D_001B3A48, D_001B3A4C))
        D_0027AF38 = 0;
}
