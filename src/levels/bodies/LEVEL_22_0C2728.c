/* LEVEL_22:0x0C2728 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_00163D28;
extern int D_00163D24;
extern int D_00163CE8[][5];
extern void *D_00163D34;
extern int D_00163D98;
extern int D_00163D9C;
extern int D_002828F8;
extern int func_01FD00(void *, int);
extern int func_01FD28(void *, int);
extern R *func_01F4A8(void *, int);
extern int func_0C0E08(int, int);
void func_0C2728(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_00163CE8[D_00163D28][D_00163D24];
    if (!s || !func_01FD00(s, -1) || func_01FD28(s, -1)) {
        D_00163D98 = 0;
        D_00163D9C = 0;
        return;
    }
    if (s == D_00163D34)
        return;
    r = func_01F4A8(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_00163D98 = r->f48;
    else
        D_00163D98 = r->f0;
    if (r->f48)
        D_00163D9C = r->f4C;
    else
        D_00163D9C = r->f4;
    if (!func_0C0E08(D_00163D98, D_00163D9C))
        D_002828F8 = 0;
}
