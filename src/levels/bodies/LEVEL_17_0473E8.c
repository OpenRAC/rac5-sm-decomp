extern float D_001DC808[];
extern unsigned char D_001DC848[];

void func_0473E8(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_001DC808[n] = D_001DC808[n - 1];
        D_001DC848[n] = D_001DC848[n - 1];
    }
    arr[index] = v;
    D_001DC808[index] = f;
    D_001DC848[index] = b;
}
