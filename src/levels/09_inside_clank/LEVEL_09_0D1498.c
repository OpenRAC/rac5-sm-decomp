/* LEVEL_09:0x0D1498 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_001EE7A8;
extern int D_001EE7A4;
extern int D_001EE768[][5];
extern void *D_001EE7B4;
extern int D_001EE818;
extern int D_001EE81C;
extern int D_003144B8;
extern int func_0241C0(void *, int);
extern int func_0241E8(void *, int);
extern R *func_023968(void *, int);
extern int func_0CFB78(int, int);
void func_0D1498(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001EE768[D_001EE7A8][D_001EE7A4];
    if (!s || !func_0241C0(s, -1) || func_0241E8(s, -1)) {
        D_001EE818 = 0;
        D_001EE81C = 0;
        return;
    }
    if (s == D_001EE7B4)
        return;
    r = func_023968(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_001EE818 = r->f48;
    else
        D_001EE818 = r->f0;
    if (r->f48)
        D_001EE81C = r->f4C;
    else
        D_001EE81C = r->f4;
    if (!func_0CFB78(D_001EE818, D_001EE81C))
        D_003144B8 = 0;
}
