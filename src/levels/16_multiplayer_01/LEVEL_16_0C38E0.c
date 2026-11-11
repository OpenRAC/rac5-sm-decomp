/* LEVEL_16:0x0C38E0 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_001B2858;
extern int D_001B2854;
extern int D_001B2818[][5];
extern void *D_001B2864;
extern int D_001B28C8;
extern int D_001B28CC;
extern int D_0027ADB8;
extern int func_022890(void *, int);
extern int func_0228B8(void *, int);
extern R *func_022110(void *, int);
extern int func_0C1FC0(int, int);
void func_0C38E0(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001B2818[D_001B2858][D_001B2854];
    if (!s || !func_022890(s, -1) || func_0228B8(s, -1)) {
        D_001B28C8 = 0;
        D_001B28CC = 0;
        return;
    }
    if (s == D_001B2864)
        return;
    r = func_022110(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_001B28C8 = r->f48;
    else
        D_001B28C8 = r->f0;
    if (r->f48)
        D_001B28CC = r->f4C;
    else
        D_001B28CC = r->f4;
    if (!func_0C1FC0(D_001B28C8, D_001B28CC))
        D_0027ADB8 = 0;
}
