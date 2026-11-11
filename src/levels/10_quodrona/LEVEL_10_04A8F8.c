extern float D_00241FC8[];
extern unsigned char D_00242008[];

void func_04A8F8(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_00241FC8[n] = D_00241FC8[n - 1];
        D_00242008[n] = D_00242008[n - 1];
    }
    arr[index] = v;
    D_00241FC8[index] = f;
    D_00242008[index] = b;
}
