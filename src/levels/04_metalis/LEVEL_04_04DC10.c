extern float D_002533D8[];
extern unsigned char D_00253418[];

void func_04DC10(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_002533D8[n] = D_002533D8[n - 1];
        D_00253418[n] = D_00253418[n - 1];
    }
    arr[index] = v;
    D_002533D8[index] = f;
    D_00253418[index] = b;
}
