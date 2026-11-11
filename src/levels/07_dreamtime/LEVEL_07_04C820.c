extern float D_0024E4C8[];
extern unsigned char D_0024E508[];

void func_04C820(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_0024E4C8[n] = D_0024E4C8[n - 1];
        D_0024E508[n] = D_0024E508[n - 1];
    }
    arr[index] = v;
    D_0024E4C8[index] = f;
    D_0024E508[index] = b;
}
