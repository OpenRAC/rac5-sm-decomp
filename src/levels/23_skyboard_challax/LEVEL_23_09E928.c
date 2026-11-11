/* LEVEL_23:0x09E928 -- placement copy of LEVEL_01_0A7BB8.c: finds which of three zones of a slot contains the given position. */
typedef struct Z { char pad[0x18]; float x0; float z0; float x1; float z1; } Z;
typedef struct Row { Z *z[3]; } Row;
extern Row D_001CA460[];
extern int D_001C9CE4;
extern int func_09D710(int);
extern void func_0B3178(void);
int func_09E928(int idx, float *pos)
{
    unsigned int i;
    if (!func_09D710(idx))
        return 0;
    for (i = 0; i < 3; i++) {
        Z *z = D_001CA460[idx].z[i];
        if (!z) {
            func_0B3178();
            return D_001C9CE4;
        }
        if (pos[0] >= z->x0 && pos[0] <= z->x1 && pos[2] >= z->z0 && pos[2] <= z->z1)
            return i;
    }
    return 0;
}
