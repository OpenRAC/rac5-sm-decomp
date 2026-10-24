extern float D_00238BC8[];
extern unsigned char D_00238C08[];

void func_04C250(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_00238BC8[n] = D_00238BC8[n - 1];
        D_00238C08[n] = D_00238C08[n - 1];
    }
    arr[index] = v;
    D_00238BC8[index] = f;
    D_00238C08[index] = b;
}
