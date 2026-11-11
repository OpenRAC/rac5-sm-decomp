extern float D_001EB888[];
extern unsigned char D_001EB8C8[];

void func_0463C8(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_001EB888[n] = D_001EB888[n - 1];
        D_001EB8C8[n] = D_001EB8C8[n - 1];
    }
    arr[index] = v;
    D_001EB888[index] = f;
    D_001EB8C8[index] = b;
}
