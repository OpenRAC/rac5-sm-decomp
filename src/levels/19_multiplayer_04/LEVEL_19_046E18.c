extern float D_001EB688[];
extern unsigned char D_001EB6C8[];

void func_046E18(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_001EB688[n] = D_001EB688[n - 1];
        D_001EB6C8[n] = D_001EB6C8[n - 1];
    }
    arr[index] = v;
    D_001EB688[index] = f;
    D_001EB6C8[index] = b;
}
