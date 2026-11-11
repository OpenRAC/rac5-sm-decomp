/* LEVEL_06:0x0CEAE8 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_001F38A8;
extern int D_001F38A4;
extern int D_001F3868[][5];
extern void *D_001F38B4;
extern int D_001F3918;
extern int D_001F391C;
extern int D_00319AB8;
extern int func_0235D0(void *, int);
extern int func_0235F8(void *, int);
extern R *func_022D78(void *, int);
extern int func_0CD1C8(int, int);
void func_0CEAE8(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001F3868[D_001F38A8][D_001F38A4];
    if (!s || !func_0235D0(s, -1) || func_0235F8(s, -1)) {
        D_001F3918 = 0;
        D_001F391C = 0;
        return;
    }
    if (s == D_001F38B4)
        return;
    r = func_022D78(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_001F3918 = r->f48;
    else
        D_001F3918 = r->f0;
    if (r->f48)
        D_001F391C = r->f4C;
    else
        D_001F391C = r->f4;
    if (!func_0CD1C8(D_001F3918, D_001F391C))
        D_00319AB8 = 0;
}
