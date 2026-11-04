extern float D_00287E58[];
extern unsigned char D_00287E98[];

void func_051358(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_00287E58[n] = D_00287E58[n - 1];
        D_00287E98[n] = D_00287E98[n - 1];
    }
    arr[index] = v;
    D_00287E58[index] = f;
    D_00287E98[index] = b;
}
