/* LEVEL_08:0x0B24B0 -- placement copy of LEVEL_01_0A7BB8.c: finds which of three zones of a slot contains the given position. */
typedef struct Z { char pad[0x18]; float x0; float z0; float x1; float z1; } Z;
typedef struct Row { Z *z[3]; } Row;
extern Row D_0023FF20[];
extern int D_0023F7A4;
extern int func_0B1298(int);
extern void func_0C7300(void);
int func_0B24B0(int idx, float *pos)
{
    unsigned int i;
    if (!func_0B1298(idx))
        return 0;
    for (i = 0; i < 3; i++) {
        Z *z = D_0023FF20[idx].z[i];
        if (!z) {
            func_0C7300();
            return D_0023F7A4;
        }
        if (pos[0] >= z->x0 && pos[0] <= z->x1 && pos[2] >= z->z0 && pos[2] <= z->z1)
            return i;
    }
    return 0;
}
