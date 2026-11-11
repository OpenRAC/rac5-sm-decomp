/* LEVEL_05:0x0D2790 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_001F3D28;
extern int D_001F3D24;
extern int D_001F3CE8[][5];
extern void *D_001F3D34;
extern int D_001F3D98;
extern int D_001F3D9C;
extern int D_00318BF8;
extern int func_023E60(void *, int);
extern int func_023E88(void *, int);
extern R *func_023608(void *, int);
extern int func_0D0E70(int, int);
void func_0D2790(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001F3CE8[D_001F3D28][D_001F3D24];
    if (!s || !func_023E60(s, -1) || func_023E88(s, -1)) {
        D_001F3D98 = 0;
        D_001F3D9C = 0;
        return;
    }
    if (s == D_001F3D34)
        return;
    r = func_023608(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_001F3D98 = r->f48;
    else
        D_001F3D98 = r->f0;
    if (r->f48)
        D_001F3D9C = r->f4C;
    else
        D_001F3D9C = r->f4;
    if (!func_0D0E70(D_001F3D98, D_001F3D9C))
        D_00318BF8 = 0;
}
