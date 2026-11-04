extern float D_0018A7C8[];
extern unsigned char D_0018A808[];

void func_041B30(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_0018A7C8[n] = D_0018A7C8[n - 1];
        D_0018A808[n] = D_0018A808[n - 1];
    }
    arr[index] = v;
    D_0018A7C8[index] = f;
    D_0018A808[index] = b;
}
