/* LEVEL_20:0x080940 -- placement copy of LEVEL_01_0A7BB8.c: finds which of three zones of a slot contains the given position. */
typedef struct Z { char pad[0x18]; float x0; float z0; float x1; float z1; } Z;
typedef struct Row { Z *z[3]; } Row;
extern Row D_00107710[];
extern int D_00106F94;
extern int func_080010(int);
extern void func_095D18(void);
int func_080940(int idx, float *pos)
{
    unsigned int i;
    if (!func_080010(idx))
        return 0;
    for (i = 0; i < 3; i++) {
        Z *z = D_00107710[idx].z[i];
        if (!z) {
            func_095D18();
            return D_00106F94;
        }
        if (pos[0] >= z->x0 && pos[0] <= z->x1 && pos[2] >= z->z0 && pos[2] <= z->z1)
            return i;
    }
    return 0;
}
