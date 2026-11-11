extern float D_002248C8[];
extern unsigned char D_00224908[];

void func_049E80(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_002248C8[n] = D_002248C8[n - 1];
        D_00224908[n] = D_00224908[n - 1];
    }
    arr[index] = v;
    D_002248C8[index] = f;
    D_00224908[index] = b;
}
