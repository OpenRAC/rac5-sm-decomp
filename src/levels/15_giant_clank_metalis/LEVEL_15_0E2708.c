/* LEVEL_15:0x0E2708 -- builds a 4x3 basis from a direction and a position, converts it to a local matrix and forwards that to a helper. */

void func_0EBEC0(float *a0, float *a1, float *a2);
void func_0EB5F8(float *a0, float *a1, int a2);
void func_0EC3A0(char *a0, char *a1, float *a2);

void func_0E2708(char *a0, char *a1, float *a2, float *a3)
{
    float basis[12];
    float out[12];
    float *dir;

    func_0EBEC0(basis, basis + 3, a3);
    dir = basis + 6;
    dir[0] = a3[0];
    dir[1] = a3[1];
    dir[2] = a3[2];
    basis[9] = a2[0];
    basis[10] = a2[1];
    basis[11] = a2[2];
    func_0EB5F8(out, basis, 0);
    func_0EC3A0(a0, a1, out);
}
