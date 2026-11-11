/* LEVEL_17:0x095740 -- placement copy of LEVEL_01_0A7BB8.c: finds which of three zones of a slot contains the given position. */
typedef struct Z { char pad[0x18]; float x0; float z0; float x1; float z1; } Z;
typedef struct Row { Z *z[3]; } Row;
extern Row D_00198630[];
extern int D_00197EB4;
extern int func_094E10(int);
extern void func_0AAD28(void);
int func_095740(int idx, float *pos)
{
    unsigned int i;
    if (!func_094E10(idx))
        return 0;
    for (i = 0; i < 3; i++) {
        Z *z = D_00198630[idx].z[i];
        if (!z) {
            func_0AAD28();
            return D_00197EB4;
        }
        if (pos[0] >= z->x0 && pos[0] <= z->x1 && pos[2] >= z->z0 && pos[2] <= z->z1)
            return i;
    }
    return 0;
}
