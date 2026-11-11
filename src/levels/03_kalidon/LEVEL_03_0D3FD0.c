/* LEVEL_03:0x0D3FD0 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_0021D028;
extern int D_0021D024;
extern int D_0021CFE8[][5];
extern void *D_0021D034;
extern int D_0021D098;
extern int D_0021D09C;
extern int D_00347BB8;
extern int func_024D98(void *, int);
extern int func_024DC0(void *, int);
extern R *func_024540(void *, int);
extern int func_0D26B0(int, int);
void func_0D3FD0(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_0021CFE8[D_0021D028][D_0021D024];
    if (!s || !func_024D98(s, -1) || func_024DC0(s, -1)) {
        D_0021D098 = 0;
        D_0021D09C = 0;
        return;
    }
    if (s == D_0021D034)
        return;
    r = func_024540(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_0021D098 = r->f48;
    else
        D_0021D098 = r->f0;
    if (r->f48)
        D_0021D09C = r->f4C;
    else
        D_0021D09C = r->f4;
    if (!func_0D26B0(D_0021D098, D_0021D09C))
        D_00347BB8 = 0;
}
