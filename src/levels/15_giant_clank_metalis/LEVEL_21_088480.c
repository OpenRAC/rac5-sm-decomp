/* LEVEL_21:0x088480 -- placement copy of LEVEL_01_0A7BB8.c: finds which of three zones of a slot contains the given position. */
typedef struct Z { char pad[0x18]; float x0; float z0; float x1; float z1; } Z;
typedef struct Row { Z *z[3]; } Row;
extern Row D_0014BCE0[];
extern int D_0014B564;
extern int func_087268(int);
extern void func_09CA28(void);
int func_088480(int idx, float *pos)
{
    unsigned int i;
    if (!func_087268(idx))
        return 0;
    for (i = 0; i < 3; i++) {
        Z *z = D_0014BCE0[idx].z[i];
        if (!z) {
            func_09CA28();
            return D_0014B564;
        }
        if (pos[0] >= z->x0 && pos[0] <= z->x1 && pos[2] >= z->z0 && pos[2] <= z->z1)
            return i;
    }
    return 0;
}
