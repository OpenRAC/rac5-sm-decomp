extern float D_001EB508[];
extern unsigned char D_001EB548[];

void func_047B88(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_001EB508[n] = D_001EB508[n - 1];
        D_001EB548[n] = D_001EB548[n - 1];
    }
    arr[index] = v;
    D_001EB508[index] = f;
    D_001EB548[index] = b;
}
