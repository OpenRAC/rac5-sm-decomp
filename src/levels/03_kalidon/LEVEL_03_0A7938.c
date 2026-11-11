/* LEVEL_03:0x0A7938 -- placement copy of LEVEL_01_0A7BB8.c: finds which of three zones of a slot contains the given position. */
typedef struct Z { char pad[0x18]; float x0; float z0; float x1; float z1; } Z;
typedef struct Row { Z *z[3]; } Row;
extern Row D_0020F6E0[];
extern int D_0020EF64;
extern int func_0A6720(int);
extern void func_0BC1C8(void);
int func_0A7938(int idx, float *pos)
{
    unsigned int i;
    if (!func_0A6720(idx))
        return 0;
    for (i = 0; i < 3; i++) {
        Z *z = D_0020F6E0[idx].z[i];
        if (!z) {
            func_0BC1C8();
            return D_0020EF64;
        }
        if (pos[0] >= z->x0 && pos[0] <= z->x1 && pos[2] >= z->z0 && pos[2] <= z->z1)
            return i;
    }
    return 0;
}
