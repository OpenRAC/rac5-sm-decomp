extern float D_00220348[];
extern unsigned char D_00220388[];

void func_048730(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_00220348[n] = D_00220348[n - 1];
        D_00220388[n] = D_00220388[n - 1];
    }
    arr[index] = v;
    D_00220348[index] = f;
    D_00220388[index] = b;
}
