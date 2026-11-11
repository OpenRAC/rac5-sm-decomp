/* LEVEL_18:0x095258 -- placement copy of LEVEL_01_0A7BB8.c: finds which of three zones of a slot contains the given position. */
typedef struct Z { char pad[0x18]; float x0; float z0; float x1; float z1; } Z;
typedef struct Row { Z *z[3]; } Row;
extern Row D_001A64B0[];
extern int D_001A5D34;
extern int func_094928(int);
extern void func_0AA7C0(void);
int func_095258(int idx, float *pos)
{
    unsigned int i;
    if (!func_094928(idx))
        return 0;
    for (i = 0; i < 3; i++) {
        Z *z = D_001A64B0[idx].z[i];
        if (!z) {
            func_0AA7C0();
            return D_001A5D34;
        }
        if (pos[0] >= z->x0 && pos[0] <= z->x1 && pos[2] >= z->z0 && pos[2] <= z->z1)
            return i;
    }
    return 0;
}
